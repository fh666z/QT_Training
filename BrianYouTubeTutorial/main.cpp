#include <QApplication>
#include <QWidget>

#include "dirs.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *win = new QWidget;

    Dirs dirs_list(win);

//    dirs_list.populateDrivesList();

    dirs_list.showCurrentFolderContents("/home/fh666z/Downloads");

    win->show();

    return app.exec();
}
