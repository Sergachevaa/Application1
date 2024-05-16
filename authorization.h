#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>

namespace Ui {
class Authorization;
}

class Authorization : public QDialog
{
    Q_OBJECT

public:
    explicit Authorization(QWidget *parent = nullptr);
    ~Authorization();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Authorization *ui;
};

#endif
