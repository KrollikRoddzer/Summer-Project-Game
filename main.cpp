#include <QApplication>
#include "gamelauncher.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    GameLauncher m;
    m.show();
    return app.exec();
}
