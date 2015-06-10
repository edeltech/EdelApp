#ifndef DUMMY_H
#define DUMMY_H

#include <QWidget>

class Dummy : public QWidget
{
    Q_OBJECT

public:
    Dummy(QWidget * parent = 0);
    
    int add(int a, int b);
};

#endif // DUMMY_H
