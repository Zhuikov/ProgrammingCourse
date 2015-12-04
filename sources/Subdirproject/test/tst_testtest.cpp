#include <QString>
#include <QtTest>
#include <math.h>
#include "length_of_segment.h"
#include "equation.h"


int length_compare(double a, double res){

    if (fabs(a - res) < 10e-5) return 1;
    return 0;
}

int struct_equality(struct Solutions_of_equation *f, float arr[4]){

    int i;
    for (i = 0; i < 4; ++i){
        if ((f->existence[i] == 1) &&
                (fabs(f->solutions[i] - arr[i]) >= 10e-2)) return 0;
    }
    return 1;
}


class TestTest : public QObject
{
    Q_OBJECT

public:
    TestTest();

private Q_SLOTS:
    void length_test();
    void equation_test();

};

TestTest::TestTest() {}

void TestTest::length_test()
{

    QVERIFY2(length_compare(length_of_segment(0, 0, 3, 4), 5), "Failure");
    QVERIFY2(length_compare(length_of_segment(30, 20, 1, 1), 34.66987), "Failure");
    QVERIFY2(length_compare(length_of_segment(16, 16, -4, -10), 32.80244), "Failure");
}

void TestTest::equation_test()
{
    float res1[4], res2[4], res3[4];
    struct Solutions_of_equation s1, s2, s3;
    struct Solutions_of_equation *a1, *a2, *a3;

    res1[0] = 1.41; res1[1] = -1.41; res1[2] = 1.00; res1[3] = -1.00;
    res2[0] = 2.00; res2[1] = -2.00; res2[2] = 0;
    res3[0] = 0.00;

    a1 = &s1; a2 = &s2; a3 = &s3;

    solve_the_equation(1, -3, 2, a1);
    solve_the_equation(2, -8, 0, a2);
    solve_the_equation(1, 0, 0, a3);

    QVERIFY2(struct_equality(a1, res1), "Failure");
    QVERIFY2(struct_equality(a2, res2), "Failure");
    QVERIFY2(struct_equality(a3, res3), "Failure");
}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"
