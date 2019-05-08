#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QThread>
#include <QCameraInfo>
#include "detect.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_reloadPushButton_clicked();

private:
    Ui::Widget *ui;
    QThread *thread;
    Detect *detector;
};

#endif // WIDGET_H
