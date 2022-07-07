#include "gamelauncher.h"
#include <QDir>

GameLauncher::GameLauncher(QMainWindow* parent, int w, int h) : QMainWindow(parent)
{
    this->setFixedSize(w, h);
    QString path = QDir::currentPath() + "/../Summer-Project-Game/MainMenuBackground/MainMenuBackground.jpg";
    mainMenu = new MainMenu(nullptr, this, path, this->width(), this->height());
    setCentralWidget(mainMenu);
}

GameLauncher::~GameLauncher()
{
    delete mainMenu;
}

void GameLauncher::Signal(Request r)
{
    switch(r)
    {
        case Request::MainMenu:
            break;
        case Request::GameOfFifteen:
            break;
        case Request::MemoryCards:
            break;
    }
}
