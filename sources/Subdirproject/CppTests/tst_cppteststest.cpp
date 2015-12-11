#include <QString>                      /// Тесты для матрицы.
#include <QtTest>
#include "matrix.h"

int compare(int a, int b){
    if (a == b) return 1;
    return 0;
}

class CppTestsTest : public QObject
{
    Q_OBJECT

public:
    CppTestsTest();

private Q_SLOTS:
    void matrix();
};

CppTestsTest::CppTestsTest()
{
}

void CppTestsTest::matrix()
{
    Matrix matrix1(2, 3), matrix2(2, 3), matrix3(2, 3);
    matrix1.set(0, 0, 2); matrix1.set(0, 1, 1); matrix1.set(0, 2, 4);
    matrix1.set(1, 0, 3); matrix1.set(1, 1, 2); matrix1.set(1, 2, 5);
    matrix2.set(0, 0, 3); matrix2.set(0, 1, 4); matrix2.set(0, 2, 3);
    matrix2.set(1, 0, 2); matrix2.set(1, 1, 7); matrix2.set(1, 2, 1);

    QVERIFY2(compare(matrix1.getNumOfCols(), 3), "wrong NumOfCols");
    QVERIFY2(compare(matrix1.getNumOfRows(), 2), "wrong NumOfRows");

    matrix3 = matrix1 + matrix2;
    QVERIFY2(compare(matrix3.get(0, 0), 5), "wrong +");
    QVERIFY2(compare(matrix3.get(1, 1), 9), "wrong +");
    QVERIFY2(compare(matrix3.get(1, 2), 6), "wrong +");

    matrix3 = matrix1 - matrix2;
    QVERIFY2(compare(matrix3.get(0, 1), -3), "wrong -");
    QVERIFY2(compare(matrix3.get(1, 0), 1), "wrong -");
    QVERIFY2(compare(matrix3.get(1, 1), -5), "wrong -");

    matrix3 = matrix3 * 4;
    QVERIFY2(compare(matrix3.get(0, 1), -12), "wrong *number");
    QVERIFY2(compare(matrix3.get(0, 2), 4), "wrong *number");
    QVERIFY2(compare(matrix3.get(1, 1), -20), "wrong *number");

    Matrix matrix4(3, 3), matrix5(2, 3);
    matrix4.set(0, 0, 0); matrix4.set(0, 1, -2); matrix4.set(0, 2, 3);
    matrix4.set(1, 0, 1); matrix4.set(1, 1, 3); matrix4.set(1, 2, 4);
    matrix4.set(2, 0, 6); matrix4.set(2, 1, 2); matrix4.set(2, 2, -1);

    matrix5 = matrix1 * matrix4;
    QVERIFY2(compare(matrix5.get(0, 0), 25), "wrong Matrix*Matrix");
    QVERIFY2(compare(matrix5.get(0, 1), 7), "wrong Matrix*Matrix");
    QVERIFY2(compare(matrix5.get(0, 2), 6), "wrong Matrix*Matrix");
    QVERIFY2(compare(matrix5.get(1, 0), 32), "wrong Matrix*Matrix");
    QVERIFY2(compare(matrix5.get(1, 1), 10), "wrong Matrix*Matrix");
    QVERIFY2(compare(matrix5.get(1, 2), 12), "wrong Matrix*Matrix");

    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(CppTestsTest)

#include "tst_cppteststest.moc"
