#include "question.h"
#include "ui_question.h"
#include "mainwindow.h"
#include <QApplication>
Question::Question(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Question)
{
    ui->setupUi(this);
}

Question::~Question()
{
    delete ui;
}

void Question::on_buttonBox_accepted()
{
    this -> close();
    accept();
}

void Question::on_buttonBox2_accepted()
{
    hide();
}
