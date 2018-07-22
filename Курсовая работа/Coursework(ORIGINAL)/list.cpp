#include "list.h"
#include "ui_list.h"
#include <QString>
#include <QDebug>


List::List(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::List)
{
    ui->setupUi(this);
}

List::~List()
{
    delete ui;
}

void List::set_list(QString stroka)
{
        ui->textEdit->setText(stroka);
}

void List::on_action_triggered()
{
    close();
}
