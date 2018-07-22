#ifndef LIST_H
#define LIST_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class List;
}

class List : public QMainWindow
{
    Q_OBJECT

public:
    void set_list(QString stroka);//выводит список аудиторий на экран
    explicit List(QWidget *parent = 0);
    ~List();

private slots:
    void on_action_triggered();

private:
    Ui::List *ui;
};

#endif // LIST_H
