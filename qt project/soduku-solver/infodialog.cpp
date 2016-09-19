#include "infodialog.h"
#include "ui_infodialog.h"

infoDialog::infoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infoDialog)
{
    ui->setupUi(this);
    QPixmap qpicinfo("resources/info.png");
}

infoDialog::~infoDialog()
{
    delete ui;
}
