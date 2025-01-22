#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)

{
    ui->setupUi(this);

}

Menu::~Menu()
{
    delete ui;
}

void Menu::slot(QString nick)
{
    ui->label->setText("Hello "+nick);
}


void Menu::on_diagram_triggered()
{
    window_d = new MainWindow(this);
    window_d->show();
    //this->hide();
}

void Menu::on_graph_triggered()
{
    window_g = new graphic(this);
    window_g->show();

    //this->hide();
    //setWindowModality(Qt::NonModal);

}

void Menu::on_exit_triggered()
{
    QCoreApplication::quit();
}



void Menu::on_table_triggered()
{
    window_p = new Products(this);
    window_p->show();
}

void Menu::closeEvent(QCloseEvent *event)
{

}

void Menu::on_back_triggered()
{
    emit backToAuthorization();
    this->close();
}
