#ifndef FIND_H
#define FIND_H

#include <QMainWindow>
#include <QWidget>
#include <QString>
#include "menu.h"

class Find: public Menu
{
public:
     void Void_Audit(int from_time_heur, int from_time_minute,int to_time_heur, int to_time_min);//устанавливает знак - говорящий о том, что аудитория будет занята
      QString set_list_audit();//в list_audit выводит список не занятых в указанное время аудиторий
    Find();
private:
    bool Now_exame(int from_time_heur, int from_time_minute,int to_time_heur, int to_time_min,QString stroka);//овтечает на вопрос " в выбранное время есть экзамен в данной аудитории ?"

protected:
    void clear_file();//очищает файл с пустыми аудиториями
};

#endif // FIND_H
