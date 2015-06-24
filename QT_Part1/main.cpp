#include <QApplication>
#include "demoui.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    DemoUI ui(app);
    ui.show();


    return app.exec();
}
