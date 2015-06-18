#include "testapp.h"
#include "ui_testapp.h"

#include <QtGui>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>

TestApp::TestApp(QWidget *parent) : QMainWindow(parent), ui(new Ui::TestApp)
{
    QWidget *window = new QWidget();
    QPushButton * b = new QPushButton("Shano", window);
    QTextEdit * txt = new QTextEdit(window);

    QVBoxLayout *ver_layout = new QVBoxLayout(window);
    ver_layout->addWidget(txt);
    ver_layout->addWidget(b);


    window->show();

    ui->setupUi(this);
}

TestApp::~TestApp()
{
    delete ui;
}
