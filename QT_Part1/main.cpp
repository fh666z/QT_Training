#include <QApplication>
#include <QWidget>

#include "demoui.h"
#include "finddialog.h"
#include "dirs.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *win = new QWidget;

//    DemoUI *ui = new DemoUI(app);
//    ui->show();

//    FindDialog *finder = new FindDialog;
//    finder->show();
    Dirs dirs_list(win);
    dirs_list.populateList();

    win->show();

    return app.exec();
}
