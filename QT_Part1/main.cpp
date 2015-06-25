#include <QApplication>
#include <QMainWindow>
#include "demoui.h"
#include "finddialog.h"
#include "dirs.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow *win = new QMainWindow;

//    DemoUI *ui = new DemoUI(app);
//    ui->show();

//    FindDialog *finder = new FindDialog;
//    finder->show();
    Dirs dirs_list(win);
    dirs_list.populateList();

    win->show();

    return app.exec();
}
