#include "products.h"
#include "ui_products.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>
#include <QTableWidget>
#include <QHeaderView>
#include <QVBoxLayout>

Products::Products(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Products)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/sqlite/users.db");
    if (db.open()) {
        qDebug() << "Database connected!";
        loadProducts();


    } else {
        qDebug() << "Database connection failed:" << db.lastError().text();
    }
}

Products::~Products()
{
    delete ui;
}

void Products::loadProducts()
{
    // Виконання запиту з об'єднанням
    QSqlQuery query("SELECT products.id, products.name,products.description, products.price, Categories.name, products.quantity, Categories.description "
                    "FROM products "
                    "JOIN Categories ON products.categoryID = Categories.id");
    if (query.exec()) {
        int columnCount = query.record().count();
        int categoryColumn = query.record().indexOf("Categories.name");

        QTableWidget *tableWidget = new QTableWidget(this);
        tableWidget->setColumnCount(columnCount-1); // Кількість стовпчиків без опису

        tableWidget->setHorizontalHeaderLabels(QStringList() << "ID" << "Назва" << "Опис" << "Вартість" << "Категорія" << "Кількість");

        tableWidget->verticalHeader()->setVisible(false); // Приховати вертикальний заголовок (нумерацію рядків)

        int row = 0;
        while (query.next()) {
            tableWidget->insertRow(row);
            for (int col = 0; col < columnCount-1; ++col) { // Не враховуючи опис
                QString value = query.value(col).toString();
                QTableWidgetItem *item = new QTableWidgetItem(value);

                // Якщо це стовпець категорії, додати підказку
                if (col == categoryColumn) {
                    QString description = query.value("Categories.description").toString();
                    item->setToolTip(description);
                }
                tableWidget->setItem(row, col, item);
            }
            ++row;
        }

        tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        // Додавання таблиці до менеджера компоновки
        QVBoxLayout *layout = new QVBoxLayout;
        layout->addWidget(tableWidget);

        // Встановлення компоновки для центрального віджета
        QWidget *centralWidget = new QWidget(this);
        centralWidget->setLayout(layout);
        setCentralWidget(centralWidget);

    } else {
        qDebug() << "Query failed:" << query.lastError().text();
    }
}

void Products::on_add_triggered()
{
    window_add = new products_Add;
    window_add->show();
}



void Products::on_update_triggered()
{
    loadProducts();
}

void Products::on_back_triggered()
{
    this->close();
}
