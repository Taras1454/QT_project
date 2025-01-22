#include "products_add.h"
#include "ui_products_add.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

products_Add::products_Add(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::products_Add)
{
    ui->setupUi(this);
    ui->choseC->setChecked(true);

    ui->getPrice->setRange(0.00, 10000.00);
    ui->getQuant->setRange(0,200);


    disconnect(ui->pushData, &QPushButton::clicked, this, &products_Add::on_pushData_clicked);
    disconnect(ui->sendC, &QPushButton::clicked, this, &products_Add::on_sendC_clicked);


    connect(ui->choseC, &QRadioButton::toggled, this, &products_Add::on_choseC_toggled);
    connect(ui->addC, &QRadioButton::toggled, this, &products_Add::on_addC_toggled);
    //connect(ui->sendC, &QPushButton::clicked, this, &products_Add::on_sendC_clicked);
    //connect(ui->pushData, &QPushButton::clicked, this, &products_Add::on_pushData_clicked);

    // Підключення до бази даних один раз у конструкторі
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/sqlite/users.db");
    if (!db.open()) {
        qDebug() << "Database connection failed:" << db.lastError().text();
    } else {
        qDebug() << "Database connected!";
        loadCategories(); // Завантаження категорій у QComboBox після успішного підключення
    }

    on_choseC_toggled(true);
}

products_Add::~products_Add()
{
    if (db.isOpen()) {
        db.close();
    }
    delete ui;
}

void products_Add::loadCategories()
{
    if (db.isOpen()) {
        QSqlQuery query(db);
        if (query.exec("SELECT id, name FROM Categories")) {
            while (query.next()) {
                int id = query.value(0).toInt();
                QString name = query.value(1).toString();
                ui->category_combo->addItem(name, id);
            }
            qDebug() << "Categories loaded successfully!";
        } else {
            qDebug() << "Failed to load categories:" << query.lastError().text();
        }
    } else {
        qDebug() << "Database is not open!";
    }
}

void products_Add::on_choseC_toggled(bool checked)
{
    if (checked) {
        ui->getCategoryName->setVisible(false);
        ui->getCategoryDesc->setVisible(false);
        ui->sendC->setVisible(false);
        ui->category_combo->setVisible(true);
        ui->getQuant->move(ui->getQuant->pos().x(), ui->getQuant->pos().y() - 20);
        ui->label_quant->move(ui->label_quant->pos().x(), ui->label_quant->pos().y() - 20);
    }
}

void products_Add::on_addC_toggled(bool checked)
{
    if (checked) {
        ui->getCategoryName->setVisible(true);
        ui->getCategoryDesc->setVisible(true);
        ui->sendC->setVisible(true);
        ui->category_combo->setVisible(false);
        ui->getQuant->move(ui->getQuant->pos().x(), ui->getQuant->pos().y() + 20);
        ui->label_quant->move(ui->label_quant->pos().x(), ui->label_quant->pos().y() +20);
    }
}

void products_Add::on_sendC_clicked()
{
    QString categoryName = ui->getCategoryName->text();
    QString categoryDesc = ui->getCategoryDesc->text();

    if (categoryName.isEmpty() || categoryDesc.isEmpty()) {
        ui->statusbar->showMessage("Дані некоректні!!!");
        return;
    }

    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("INSERT INTO Categories (name, description) VALUES (:name, :description)");
        query.bindValue(":name", categoryName);
        query.bindValue(":description", categoryDesc);

        if (!query.exec()) {
            qDebug() << "Error inserting category:" << query.lastError().text();
        } else {
            qDebug() << "Category inserted successfully!";
            ui->statusbar->showMessage("Категорія успішно додана");
            // Повернення до вибору категорії
            ui->choseC->setChecked(true);

            // Оновлення списку категорій
            ui->category_combo->clear();
            loadCategories();
        }
    } else {
        qDebug() << "Database is not open!";
    }
}

void products_Add::on_pushData_clicked()

{
    if(ui->getName->text().isEmpty() || ui->getDesc->text().isEmpty() || ui->getPrice->value()<=0 || ui->getQuant->value()<=0 || ui->category_combo->currentIndex()==-1 )
        ui->statusbar->showMessage("Нкоректно введені дані!!!");
    else
    {
    if (db.isOpen()) {
        QSqlQuery query(db);
        query.prepare("INSERT INTO products (name, description, price, categoryID, quantity) VALUES (:name, :desc, :price, :category, :quantity)");

        // Прив'язка параметрів
        query.bindValue(":name", ui->getName->text());
        query.bindValue(":desc", ui->getDesc->text());
        query.bindValue(":price", ui->getPrice->value());
        query.bindValue(":quantity", ui->getQuant->value());

        if (ui->choseC->isChecked()) {
            query.bindValue(":category", ui->category_combo->currentData().toInt()); // Приклад прив'язки categoryID з комбо-боксу
        }

        if (!query.exec()) {
            qDebug() << "Error inserting product:" << query.lastError().text();
        } else {
            qDebug() << "Product inserted successfully!";
            ui->statusbar->showMessage("Продукт успішно доданий");
            ui->getName->clear();
            ui->getDesc->clear();
            ui->getPrice->clear();
            ui->category_combo->clear();
            ui->getQuant->clear();

        }
    } else {
        qDebug() << "Database is not open!";
    }

    }
}
