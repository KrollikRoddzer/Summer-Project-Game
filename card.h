#ifndef CARD_H
#define CARD_H

#include <QWidget>
#include <QPushButton>
#include <QIcon>
#include <QPixmap>

class Field;

class Card : public QWidget
{
    Q_OBJECT
private:
    int id;
    int width;
    int height;
    bool state;

    QPushButton* card;
    QIcon* frontSide;
    QIcon* backSide;
    Field* field;

public:
    Card(QWidget* parent = nullptr, int _id = 0, QString backSidePath = "", QString frontSidePath = "", int w = 100, int h = 150, Field* f = nullptr);
    ~Card();
    bool getState() const;
    void changeState();
    int getId() const;

private slots:
    void pushed();
};

#endif // CARD_H
