#include "menu.h"
#include "ui_menu.h"
#include "find.h"
#include "list.h"
#include "mainwindow.h"
#include <QDebug>
#include <QModelIndex>
#include <QMessageBox>
#include <QTableWidget>
#include <QFile>
#include <QString>
#include <QTextEdit>

Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    ui->one_week->setEnabled(true);//даем пользователю доступ изменять ячейки таблицы
     ui->two_week->setEnabled(true);
      ui->three_week->setEnabled(true);
       ui->four_week->setEnabled(true);
        ui->five_week->setEnabled(true);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::setTableText(QString text)
{
    ui->Name_Groupe->setText(text);
}

void Menu::on_pushButton_clicked()
{
            if(!flag)//если данные не были вбиты в таблицу
            {

                flag=1;
                QString str;//для хранения строкки с файла
                QString str_copy="";//хранит имя группы и сравнивает его с текущим
                QString index_row=0;//хранит индекс строки
                QString index_col=0;//хранит индекс строки
                try{


                QFile file("Groupe.txt");
                if(file.open(QIODevice::ReadOnly))//открываем файл для чтения
                {
                        //считываем данные
                        QTextStream stream(&file);
                        while (!stream.atEnd())
                           {
                               str = stream.readLine();//считывает строку
                               if(str[0]=="*")//если данная строка содержит название группы
                               {

                                   for(int i=1;i<str.length();i++)
                                   {
                                       str_copy +=str[i];
                                   }
                                   if(str_copy==ui->Name_Groupe->text())//если нашлась соответствующаяся группа
                                   {
                                       while(!stream.atEnd())//считываем с txt информацию об экзаменах
                                       {
                                           str = stream.readLine();//считывает строку
                                           if(str[0]!="*")//пока не дошли до информации о другой группы
                                           {
                                               Line_memorization(str);//передаем строку на обработу в массив
                                           }else{
                                               break;
                                           }
                                       }
                                        SetInformationTable();
                                       break;
                                   }
                               }

                               str_copy="";
                           }
                        file.close();
                    }else{
                    throw 4959;
                    }
                }
                catch(int i){
                    QMessageBox::critical(this, "Ошибка" + QString::number(i), "БД не удалось открыть, повторите попытку позже");
                }
         }
            ui->one_week->setEnabled(false);//даем пользователю доступ изменять ячейки таблицы
             ui->two_week->setEnabled(false);
              ui->three_week->setEnabled(false);
               ui->four_week->setEnabled(false);
                ui->five_week->setEnabled(false);
}

void Menu::Line_memorization(QString str)//запоминание строки в массив
{
    QString copy_inf;//для хранения слова, которое запишется в массив
    int final_index=0;//запоминает на чем закончилось считывание строки


    for(int i =0;i<4;i++)
    {
        for(int k=final_index;k<str.length();k++)
        {
            if(k==0)//дабы не записывать / в строку
            {
                k++;
            }
                if(str[k]!=" "){
                    copy_inf +=str[k];
                }else{
                    exame[count][i] = copy_inf;//запоминаем информацию об count экзамене
                    copy_inf = "";
                    final_index = k+1;
                    break;
                }
           }
        }
     count++;
}

void Menu::SetInformationTable()
{

    for(int i =0; i<7;i++)//перемещаемся по строкам таблицы
    {
        for(int j=1;j<4;j++)//перемещаемся по столбцам
        {
            //1-ая таблица
            QTableWidgetItem *item1 = new QTableWidgetItem();
            item1->setText(exame[i][j]);
            ui->one_week->setItem(i,j,item1);//записываем данные в таблицу

            //2-ая таблица
            QTableWidgetItem *item2 = new QTableWidgetItem();
            item2->setText(exame[i+7][j]);
            ui->two_week->setItem(i,j,item2);//записываем данные в таблицу

            //3-ая таблица
            QTableWidgetItem *item3 = new QTableWidgetItem();
            item3->setText(exame[i+14][j]);
            ui->three_week->setItem(i,j,item3);//записываем данные в таблицу
            //4-ая таблица
            QTableWidgetItem *item4 = new QTableWidgetItem();
            item4->setText(exame[i+21][j]);
            ui->four_week->setItem(i,j,item4);//записываем данные в таблицу
            //5-ая таблица
            QTableWidgetItem *item5 = new QTableWidgetItem();
            item5->setText(exame[i+28][j]);
            ui->five_week->setItem(i,j,item5);//записываем данные в таблицу
     }

    }
}

int Menu::new_copy_time(QString copy_time, int i, int j)
{
    QString copy_str="";
    copy_str += copy_time[i];
    copy_str +=copy_time[j];
    int k = (copy_str).toInt(0,10);

    return  k;
}

short Menu::verification_time(int hour_to, int hour_from, int minute_to, int minute_from)
{
    if(hour_to>=hour_from&&minute_to>=minute_from)
    {
        return 1;
    }else{
        return 0;
    }
}

void Menu::on_find_aud_clicked()
{
    if(flag)//если вывесили расписание
    {

            //запоминаем промежуток времени ОТ
            QTime time = ui->from->time();
            int from_time_heur = time.hour();
            int from_time_minute= time.minute();

            //запоминаем промежуток времени ДО
            time = ui->to->time();
            int to_time_heur = time.hour();
            int to_time_min= time.minute();
            if(verification_time(to_time_heur,from_time_heur,to_time_min,from_time_minute))
            {
                    Find k;//вызываем через объект класса Find функцю, чтобы запомнить данные о пустых аудиториях в заданный промежуток
                    k.Void_Audit(from_time_heur, from_time_minute, to_time_heur,  to_time_min);

                    List *text = new List();
                    text->show();
                    text->set_list(k.set_list_audit());

                    for(int i=0;i<7;i++)//пробегаемся по номеру месяца
                    {
                        Find_exame(i,from_time_heur,from_time_minute,to_time_heur,to_time_min);
                        Find_exame(i+7,from_time_heur,from_time_minute,to_time_heur,to_time_min);
                        Find_exame(i+14,from_time_heur,from_time_minute,to_time_heur,to_time_min);
                        Find_exame(i+21,from_time_heur,from_time_minute,to_time_heur,to_time_min);
                        Find_exame(i+28,from_time_heur,from_time_minute,to_time_heur,to_time_min);
                    }
            }else{
                QMessageBox::warning(this,"Ошибка", "Неверно выбран промежуток времени\nВремя ДО должно быть больше времени ОТ");
            }
    }else{
        QMessageBox::warning(this,"Ошибка", "Для начала нажмите кнопку \"Вывести расписание экзаменов\" ! ");
    }
}

void Menu::Update_Color_Table(QTableWidgetItem *item, int i)
{

    item->setBackgroundColor(Qt::blue);
    item->setText(exame[i][3]);
    item->setTextColor(Qt::white);
    if(i<7){
         ui->one_week->setItem(i,3,item);
    }else if(i>6&&i<14){
        ui->two_week->setItem(i-7,3,item);
    }else if(i>13&&i<21){
        ui->three_week->setItem(i-14,3,item);
    }else if(i>20&&i<28){
       ui->four_week->setItem(i-21,3,item);
    }else if(i>27&&i<34){
        ui->five_week->setItem(i-28,3,item);
    }
}

void Menu::Start_Color_Table(QTableWidgetItem *item, int i)
{
    item->setBackgroundColor(Qt::red);
     item->setText(exame[i][3]);
     item->setTextColor(Qt::white);
    if(i<7){
         ui->one_week->setItem(i,3,item);
    }else if(i>6&&i<14){
        ui->two_week->setItem(i-7,3,item);
    }else if(i>13&&i<21){
        ui->three_week->setItem(i-14,3,item);
    }else if(i>20&&i<28){
       ui->four_week->setItem(i-21,3,item);
    }else if(i>27&&i<34){
        ui->five_week->setItem(i-28,3,item);
    }
}


void Menu::Find_exame(int i, int from_time_heur, int from_time_minute, int to_time_heur, int  to_time_min)
{

QString time_start_and_exame;//время начала и конца экзамена

    QString copy_time;
    if(i<7){
            time_start_and_exame = ui->one_week->item(i,2)->text();
    }else if(i>6&&i<14){
          time_start_and_exame = ui->two_week->item(i-7,2)->text();
    }else if(i>13&&i<21){
         time_start_and_exame = ui->three_week->item(i-14,2)->text();
    }else if(i>20&&i<28){
       time_start_and_exame = ui->four_week->item(i-21,2)->text();
    }else if(i>27&&i<34){
          time_start_and_exame = ui->five_week->item(i-28,2)->text();
    }

    //запоминаем время(минуты) начала экзамена

     int start_examen_min = new_copy_time(time_start_and_exame,3,4);

    int start_examen_heur=new_copy_time(time_start_and_exame,0,1);

     //запоминаем время(часы) начала экзамена

    int end_examen_min = new_copy_time(time_start_and_exame,9,10);
     int end_examen_heur=new_copy_time(time_start_and_exame,6,7);

    if( ( (from_time_heur<=start_examen_heur)&&(to_time_heur<=start_examen_heur)&&(from_time_minute<=start_examen_min)&&(to_time_min<=start_examen_min)  ) ||  ( (from_time_heur>=end_examen_heur)&&(from_time_minute>=end_examen_min)   ) )//если выбранный промежуток идет до начала экзамена
    {
        QTableWidgetItem *item1= new QTableWidgetItem();

        Update_Color_Table(item1,i);
    }else{
        QTableWidgetItem *item2 = new QTableWidgetItem();
        Start_Color_Table(item2,i);
    }
}



void Menu::on_action_triggered()//закрываем окно
{
    close();
}

void Menu::on_pushButton_2_clicked()//закрываем окно списка экзаменов и сменяем группу в  главном окне
{
        MainWindow *new_groupe = new MainWindow();
        new_groupe->show();
        close();
}
