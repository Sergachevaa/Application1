#include "authorization.h"
#include "mainwindow.h"
#include "ui_authorization.h"
#include <QMessageBox>
#include <QSqlQuery>


Authorization::Authorization(QWidget *parent) :
QDialog(parent),
  ui(new Ui::Authorization)
{
    ui->setupUi(this);
    password_id = password_id; 
}
Authorization::~Authorization()
{
    delete ui;
}

void Authorization::on_pushButton_clicked()
{
    QString users = ui->login->text();
    QString passwords = password_id->text();
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("astra");
    db.setDatabaseName("input of data");
    db.setUserName("postgres");
    db.setPassword("Brice2427801");
    db.setPort(5432);
    if (!db.open())
    {
        QMessageBox::critical(this, "Ошибка подключения", "Не удалось подключиться к базе данных");
        return;
    }
    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE users = :lodin AND passwords = :passwords_id");
    query.bindValue(":login", users);
    query.bindValue(":passwords_id", passwords);
    if (query.exec() && query.next())
    {
        QMessageBox::information(this, "Авторизация", "Вы успешно прошли авторизацию!");
        this->close();
    }
    else
    {
        QMessageBox::warning(this, "Авторизация", "Вы не прошли авторизацию!");
    }
    db.close();
}

