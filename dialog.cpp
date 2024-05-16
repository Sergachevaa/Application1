#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    if(ui -> radioButton -> isChecked ())
    {
        QMessageBox :: critical (this, "Выбрана зима", "Это неправильный ответ!!!");
    }
    if(ui -> radioButton_2 -> isChecked ())
    {
        QMessageBox :: warning (this, "Выбрана весна", "Подумайте получше!!!");

    }
    if(ui -> radioButton_3 -> isChecked ())
    {
        QMessageBox :: information (this, "Выбрана лето", "Это правильный ответ!!!");
        this-> close();
    }
    if(ui -> radioButton_4 -> isChecked ())
    {
        QMessageBox :: warning (this, "Выбрана осень", "Это неправильный ответ!!!");

    }
}
