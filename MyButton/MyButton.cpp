#include "MyButton.h"

MyButton::MyButton(QObject *parent)
    : QObject{parent}
{}

void MyButton::printButtonData()
{
    qDebug() << Q_FUNC_INFO << " Hurray!!! You have succefully clicked on a button!!!";
}
