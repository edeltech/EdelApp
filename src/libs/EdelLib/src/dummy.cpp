#include "dummy.h"

#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

Dummy::Dummy(QWidget * parent) : QWidget(parent)
{
    QLabel *label = new QLabel(tr("I'm the Dummy widget from EdelLib"));
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(label);
}

int Dummy::add(int a, int b)
{
    return a + b;
}