#include <QtTest/QtTest>

#include "dummy.h"

class tst_Dummy : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase()
    {
    }
    
    void testSomething()
    {
        Dummy dummy;
        QVERIFY(dummy.add(1, 2) == 3);
    }
};

QTEST_MAIN(tst_Dummy)

#include "tst_dummy.moc"
