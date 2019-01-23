#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>
#include <QThread>
#include <QDebug>
#include <QMessageBox>
#include "detectframe.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:

private:
    Ui::Dialog *ui;
    QThread *workThread;
    DetectFrame *detectFrame;
};

#endif // DIALOG_H
