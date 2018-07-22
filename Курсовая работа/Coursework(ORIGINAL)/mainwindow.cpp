#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QUrl>
#include <QDesktopServices>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//подтверждение группы
{
    try{

            QFile file("Groupe.txt");
            QString str;
          if(ui->group->text() != "")//если данные введенны
            {
                if(file.open(QIODevice::ReadOnly))
                {
                    //считываем данные
                    QTextStream stream(&file);
                    while (!stream.atEnd())
                       {
                           str = stream.readLine();

                           //запоминает * перед названием гурппы

                           if(str=="*"+ui->group->text())
                           {
                               QMessageBox::information(this,"Авторизация", "Группа найдена");
                               flag=1;

                               Menu *menu = new Menu;
                               menu->show();//выводим меню
                               menu->setTableText(ui->group->text());//передаем 2-ой форме наименование группы
                                close();
                           }
                       }
                    if(!flag){
                        QMessageBox::critical(this,"Ошибка авторизации", "Группа не найдена. Введите другое название гурппы");
                    }
                    file.close();
                }else{
                    throw 1;
                }
            }else
            {
                QMessageBox::critical(this,"Ошибка авторизации", "Вы не ввели группу !");
            }

    }
    catch(int i)
    {
         QMessageBox::critical(this,"ERROR","Не удалось открыть файл Groupe.txt.\nПроверьте правильность имени файла!");
    }
}

void MainWindow::on_action_triggered()
{
    close();
}



void MainWindow::on_pushButton_2_clicked()
{
    try{
        if(!QDesktopServices::openUrl(QUrl("https://vk.com/goncharivskyy")))
        {
            throw 911;
        }
    }
    catch(int i){
        QMessageBox::critical(this, "ERROR " + QString::number(i), "Не удалось призвести переход по ссылке");
    }


}
