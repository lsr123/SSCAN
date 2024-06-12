#ifndef MAIN1_H
#define MAIN1_H

#include <QMainWindow>
#include "form.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class main1;
}
QT_END_NAMESPACE

class main1 : public QMainWindow
{
    Q_OBJECT

public:
    main1(QWidget *parent = nullptr);
    ~main1();


private slots:
    void on_pushButton_clicked();

private:
    Ui::main1 *ui;
};
#endif // MAIN1_H
