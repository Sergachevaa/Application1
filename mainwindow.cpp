#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <authorization.h>
#include <question.h>
#include <dialog.h>
#include <QApplication>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()
{
    hide();
    ui -> statusbar -> showMessage("Вход в систему");
    Authorization window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_action_2_triggered()
{
    hide();
    ui -> statusbar -> showMessage("Выберите вариант ответа");
    Dialog window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_action_3_triggered()
{
   ui -> statusbar -> showMessage("Ответьте на вопрос");
   Question window(this);
   window.setModal(true);
   if (window.exec()== QDialog :: Accepted)
   {
       close();
   }
}
