#ifndef GAMELAUNCHER_H
#define GAMELAUNCHER_H

#include <QMainWindow>
#include <mainmenu.h>
#include "request.h"

class GameLauncher : public QMainWindow
{
    Q_OBJECT
public:
    GameLauncher(QMainWindow* parent = nullptr, int w = 1600, int h = 900);
    ~GameLauncher();
    void Signal(Request);
private:
    MainMenu* mainMenu;
};

#endif // GAMELAUNCHER_H
