#ifndef LIST_VOID_AUDIT_H
#define LIST_VOID_AUDIT_H

#include <QMainWindow>

namespace Ui {
class List_void_audit;
}

class List_void_audit : public QMainWindow
{
    Q_OBJECT

public:
    QString List;//для хранения списка пустых аудиторий
    void set_Text(QString stroka);//устанавливает значение в List
    explicit List_void_audit(QWidget *parent = 0);
    ~List_void_audit();

private:
    Ui::List_void_audit *ui;
};

#endif // LIST_VOID_AUDIT_H
