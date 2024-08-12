#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QObject>
#include <QDebug>

class MyButton : public QObject
{
    Q_OBJECT
public:
    explicit MyButton(QObject *parent = nullptr);

    Q_INVOKABLE void printButtonData();

signals:
};

#endif // MYBUTTON_H
