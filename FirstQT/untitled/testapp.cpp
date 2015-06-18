#include "testapp.h"
#include "ui_testapp.h"

TestApp::TestApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestApp)
{
    ui->setupUi(this);
}

TestApp::~TestApp()
{
    delete ui;
}
