#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QMainWindow>

#include <QWidget>
class QErrorMessage;
#include <QWizard>

namespace Ui {
class MyWindow;
}

class MyWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyWindow(QWidget *parent = nullptr);
    ~MyWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::MyWindow *ui;
    QErrorMessage *errordlg;

    QWizardPage *createPage1();        // 新添加
    QWizardPage *createPage2();        // 新添加
    QWizardPage *createPage3();    // 新添加

};
#endif // MYWINDOW_H
