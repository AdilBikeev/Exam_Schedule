#include "find.h"
#include "menu.h"
#include <QDebug>
#include <QFile>
#include <QString>
#include <QMessageBox>

Find::Find()
{

}

void Find::Void_Audit(int from_time_heur, int from_time_minute,int to_time_heur, int to_time_min)//записываем в файл
{
        clear_file();//очищаем файл перед записью
        for(int i=1;i<501;i++)//ищем аудитории
        {
            bool flag=1;//0- аудитория занята, 1- аудитория не занята
            QFile file("Auditor.txt");
            QFile file_groupe("Groupe.txt");
            QString stroka;

            if(file.open((QIODevice::Append | QIODevice::Text) ) &&file_groupe.open(QIODevice::ReadOnly))
            {
                QTextStream stream(&file);//переменная для записи в файл Auditor
                QTextStream read(&file_groupe);//переменная для чтения файла Groupe

                    while (!read.atEnd())//проходим построчно пока не дойдем до конца файла
                    {
                        stroka = read.readLine();
                        if(stroka.indexOf("/")!=-1&&stroka.indexOf("А-"+ QString::number(i))!=-1&&Now_exame(from_time_heur, from_time_minute, to_time_heur, to_time_min,stroka))
                        {
                            flag = 0;
                            break;
                        }
                    }
                    if(flag)
                    {
                        stream<<"A-"<<i<<"           ";
                        if(i%20==0)
                        {
                            stream<<"\n";
                        }
                    }
            }
            file.close();
            file_groupe.close();
        }

}

//Использую шаблон
bool Find::Now_exame(int from_time_heur, int from_time_minute, int to_time_heur, int to_time_min,QString stroka)
{
    //запоминаем время(минуты) начала экзамена
    QString copy_time;
    copy_time = stroka[stroka.indexOf(":")+1] ;
    copy_time +=stroka[stroka.indexOf(":")+2];

     int start_examen_min = copy_time.toInt(0,10);

     copy_time = stroka[stroka.indexOf(":")-2] ;
     copy_time +=stroka[stroka.indexOf(":")-1];
    int start_examen_heur=copy_time.toInt(0,10);

     //запоминаем время(часы) начала экзамена

    copy_time = stroka[stroka.indexOf("-")+4] ;
    copy_time +=stroka[stroka.indexOf("-")+5];
    int end_examen_min = copy_time.toInt(0,10);

    copy_time = stroka[stroka.indexOf("-")+1] ;
    copy_time +=stroka[stroka.indexOf("-")+2];
     int end_examen_heur=copy_time.toInt(0,10);
     if( ( (from_time_heur<=start_examen_heur)&&(to_time_heur<=start_examen_heur)&&(from_time_minute<=start_examen_min)&&(to_time_min<=start_examen_min)  ) ||  ( (from_time_heur>=end_examen_heur)&&(from_time_minute>=end_examen_min)   ) )//если выбранный промежуток идет до начала экзамена
     {
        return 0;
     }else{
         return 1;
     }
}

QString Find::set_list_audit()
{
        QFile file("Auditor.txt");
        QString stroka;
        QString List="";
        if(file.open(QIODevice::ReadOnly))
        {
            QTextStream read(&file);//переменная для чтения файла Auditory

                while (!read.atEnd())//проходим построчно пока не дойдем до конца файла
                {
                    stroka = read.readLine();
                    List +=stroka ;
                    List +=" ";
                }
        }
        file.close();
        return List;
}

void Find::clear_file()
{
    try{
        QFile file("Auditor.txt");
        QString stroka;
        if(file.open(QIODevice::WriteOnly)){ }else{throw 2300;}
        file.close();
    }
    catch(int i)
    {
        QMessageBox::critical(this, "Ошибка " + QString::number(i), "БД не удалось октрыть");
    }
}

