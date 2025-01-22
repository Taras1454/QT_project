#include "autorization.h"
#include "ui_autorization.h"

Autorization::Autorization(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::Autorization)
{
    ui->setupUi(this);



    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/sqlite/users.db");
    if (db.open()) {
        qDebug() << "Database connected!";
    } else {
        qDebug() << "Database connection failed:" << db.lastError().text();
    }


}

Autorization::~Autorization()
{
    delete ui;
}

void Autorization::on_pushData_clicked()
{
    if(ui->getPass->text().isEmpty() && ui->getEmail->text().isEmpty()) ui->statusbar->showMessage("Введіть дані");
    else if(ui->getEmail->text().isEmpty()) ui->statusbar->showMessage("Введіть пошту");
    else if(ui->getPass->text().isEmpty()) ui->statusbar->showMessage("Введіть пароль");

    else{


        QSqlQuery query("SELECT email,password,name FROM users");
            if (!query.exec()) {
                qDebug() << "Query failed:" << query.lastError().text();
                return;
            }

            // Виведення всіх записів
            while (query.next()) {
                QStringList row;
                for (int i = 0; i < query.record().count(); ++i) {
                    row << query.value(i).toString();
                }

                qDebug() << row.join(", ");

                if(query.value("email").toString()==ui->getEmail->text()&&query.value("password").toString()==ui->getPass->text()) {qDebug("ok");
                window = new Menu();
                window->show();

                connect(this,&Autorization::signal,window,&Menu::slot);
                emit signal(query.value("name").toString());

                connect(window, &Menu::backToAuthorization, this, &Autorization::show);

                this->hide();
                ui->getPass->clear();
                ui->getEmail->clear();
                ui->statusbar->clearMessage();
                //db.close();
                }
                else ui->statusbar->showMessage("Невірні дані");
            }

    }

}
