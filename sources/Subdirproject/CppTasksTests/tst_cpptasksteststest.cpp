#include <QString>
#include <QtTest>
#include <math.h>
#include "length_of_segment.h"

int length_compare(double a, double res){

    if (fabs(a - res) < 10e-2) return 1;
    return 0;
}

class TestsTest : public QObject
{
    Q_OBJECT

public:
    TestsTest();

private Q_SLOTS:
    void length_test();
};

TestsTest::TestsTest() {}

void TestsTest::length_test()
{
    Point A, B(3, 4), C(1, 1), D(20, 13);
    QVERIFY2(length_compare(A.length_of_segment(B), 5.00), "Fail");
    QVERIFY2(length_compare(C.length_of_segment(D), 22.47), "Fail");
    QVERIFY2(length_compare(B.length_of_segment(D), 19.24), "Fail");
}

QTEST_APPLESS_MAIN(TestsTest)

#include "tst_cpptasksteststest.moc"
