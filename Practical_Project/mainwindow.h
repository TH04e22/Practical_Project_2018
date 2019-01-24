#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "settingdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_testingPushButton_clicked();

    void on_backToHomePagePushButton_clicked();

    void on_settingPushButton_clicked();

private:
    Ui::MainWindow *ui;
    settingDialog *sDialog;
};

#endif // MAINWINDOW_H
