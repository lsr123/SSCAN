#include "main1.h"
#include "ui_main1.h"

main1::main1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::main1)
{
    ui->setupUi(this);
}

main1::~main1()
{
    delete ui;
}

void main1::on_pushButton_clicked()
{
    Form *b = new Form;
    b->show();
}

