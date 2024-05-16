#ifndef QUESTION_H
#define QUESTION_H

#include <QDialog>


namespace Ui {
class Question;
}

class Question : public QDialog
{
    Q_OBJECT

public:
    explicit Question(QWidget *parent = nullptr);
    ~Question();
private slots:
    void on_buttonBox_accepted();

    void on_buttonBox2_accepted();

private:
    Ui::Question *ui;
};

#endif
