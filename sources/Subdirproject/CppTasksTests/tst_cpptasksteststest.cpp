#include <QString>
#include <QtTest>
#include <math.h>
#include "exceptions.h"
#include "length_of_segment.h"
#include "equation.h"
#include "kilometrestomiles.h"

int double_compare(double a, double res){

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
    void equation_test();
    void kilometres_to_miles_test();
};

TestsTest::TestsTest() {}

void TestsTest::length_test()
{
    Point A, B(3, 4), C(1, 1), D(20, 13);
    QVERIFY2(double_compare(A.length_of_segment(B), 5.00), "wrong calculations");
    QVERIFY2(double_compare(C.length_of_segment(D), 22.47), "wrong calculations");
    QVERIFY2(double_compare(B.length_of_segment(D), 19.24), "wrong calculations");
}

void TestsTest::equation_test()
{
    Equation eq1(1, -3, 2), eq2(2, -8, 0), eq3(1, 0, 0), eq4(6, 6, 6);
    double arr[5], arr2[5], arr3[5], arr4[5];

    eq1.solveEquation();
    eq1.getSolutions(arr);
    QVERIFY2((int)arr[0] == 4, "wrong numOFsolutions eq1");
    QVERIFY2(double_compare(arr[1], 1.41), "wrong solution eq1");
    QVERIFY2(double_compare(arr[2], -1.41), "wrong solution eq1");
    QVERIFY2(double_compare(arr[3], 1.00), "wrong solution eq1");
    QVERIFY2(double_compare(arr[4], -1.00), "wrong solution eq1");

    eq2.solveEquation();
    eq2.getSolutions(arr2);
    QVERIFY2((int)arr2[0] == 3, "wrong numOfsolutions eq2");
    QVERIFY2(double_compare(arr2[1], 2.00), "wrong solution eq2");
    QVERIFY2(double_compare(arr2[2], -2.00), "wrong solution eq2");
    QVERIFY2(double_compare(arr2[3], 0), "wrong solution eq2");

    eq3.solveEquation();
    eq3.getSolutions(arr3);
    QVERIFY2((int)arr3[0] == 1, "wrong numOfsolutions eq3");
    QVERIFY2(double_compare(arr3[1], 0), "wrong solution eq3");

    eq4.solveEquation();
    eq4.getSolutions(arr4);
    QVERIFY2((int)arr4[0] == 0, "wrong numOfsolutions eq4");
}

void TestsTest::kilometres_to_miles_test()
{
   KilometresToMiles table(15);
   double arr[2];

   table.makeTable();

   table.getRow(1, arr);
   QVERIFY2(double_compare(1.00, arr[0]), "wrong miles");
   QVERIFY2(double_compare(1.61, arr[1]), "wrong km");

   table.getRow(14, arr);
   QVERIFY2(double_compare(6.00, arr[0]), "wrong miles");
   QVERIFY2(double_compare(9.65, arr[1]), "wrong km");

   table.getRow(20, arr);
   QVERIFY2(double_compare(arr[0], 8.08), "wrong miles");
   QVERIFY2(double_compare(arr[1], 13.00), "wrong km");
}

QTEST_APPLESS_MAIN(TestsTest)

#include "tst_cpptasksteststest.moc"
