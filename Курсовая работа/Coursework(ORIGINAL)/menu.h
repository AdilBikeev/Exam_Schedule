#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include <QString>
#include <QStandardItemModel>
#include <QTableWidget>

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    void setTableText(QString text);//для вставвки текста с 1 формы
    QString exame[100][4];//запоминает информацию
    bool audience[100];//хранит информацию о том - какая аудитория свободна, а какая нет
    short count=0;//кол-во экзаменов
    short flag = 0;//Вывешено, ли расписание
    explicit Menu(QWidget *parent = 0);
    ~Menu();

private slots:
    void on_pushButton_clicked();

    void on_find_aud_clicked();

    void on_action_triggered();

    void on_pushButton_2_clicked();

private:
    int new_copy_time(QString copy_time, int i, int j);//возвращает значение вермени (часы или минуты)
    void SetInformationTable();//установление информации в таблицы
    void Line_memorization(QString str);//запоминание строки в массив
    void Find_exame(int i,  int start_examen_min, int start_examen_heur, int end_examen_min, int to_time_min);//находит свободную аудиторию в заданное время
    void Update_Color_Table(QTableWidgetItem *item, int i);//раскрашивает ячейки таблицы, которые обозначают свободную аудиторию в зааднный промежуто
    void  Start_Color_Table(QTableWidgetItem *item, int i);//раскрашивает ячейку таблицы в базовый цвет
    short verification_time(int hour_to, int hour_from, int minute_to,int minute_from);//проверка на коректность ввода времени

    Ui::Menu *ui;
};

#endif // MENU_H
