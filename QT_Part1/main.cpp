#include <QApplication>

#include "demoui.h"
#include "finddialog.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    DemoUI *ui = new DemoUI(app);
    ui->show();

    FindDialog *finder = new FindDialog;
    finder->show();

    return app.exec();
}
