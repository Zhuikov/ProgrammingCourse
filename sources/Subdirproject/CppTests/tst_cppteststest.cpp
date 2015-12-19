#include <QString>                     
#include <QtTest>
#include "matrix.h"

class CppTestsTest : public QObject
{
    Q_OBJECT

public:
    CppTestsTest();

private Q_SLOTS:
    void matrix_NumOfCols();
    void matrix_sum();
    void matrix_sub();
    void matrix_multNumber();
    void matrix_mult();
};

CppTestsTest::CppTestsTest()
{
}

/// Не надо лепить все тесты сразу в одном тестовом методе
/// Делайте тестовый метод для каждого public метода (и перегруженного оператора) по отдельности
/// тогда, если сломается умножение матриц, упадет только тестовый метод связанный с умножением,
/// но будет понятно, что все остальное работает по-прежнему
/// это поможет локализовать ошибку просто глядя на отчет о прохождении тестов
/// а в текущем состоянии будет казаться, что вся матрица к чертям сломалась
void CppTestsTest::matrix_NumOfCols()
{
    Matrix matrix1(2, 3);

    QCOMPARE(matrix1.getNumOfCols(), 3);
    QCOMPARE(matrix1.getNumOfRows(), 2);

}

void CppTestsTest::matrix_sum()
{
    Matrix matrix1(2, 3), matrix2(2, 3), matrix3(2, 3);
    matrix1.set(0, 0, 2); matrix1.set(0, 1, 1); matrix1.set(0, 2, 4);
    matrix1.set(1, 0, 3); matrix1.set(1, 1, 2); matrix1.set(1, 2, 5);
    matrix2.set(0, 0, 3); matrix2.set(0, 1, 4); matrix2.set(0, 2, 3);
    matrix2.set(1, 0, 2); matrix2.set(1, 1, 7); matrix2.set(1, 2, 1);

    matrix3 = matrix1 + matrix2;
    QCOMPARE(matrix3.get(0, 0), 5);
    QCOMPARE(matrix3.get(1, 1), 9);
    QCOMPARE(matrix3.get(1, 2), 6);

}

void CppTestsTest::matrix_sub()
{
    Matrix matrix1(2, 3), matrix2(2, 3), matrix3(2, 3);
    matrix1.set(0, 0, 2); matrix1.set(0, 1, 1); matrix1.set(0, 2, 4);
    matrix1.set(1, 0, 3); matrix1.set(1, 1, 2); matrix1.set(1, 2, 5);
    matrix2.set(0, 0, 3); matrix2.set(0, 1, 4); matrix2.set(0, 2, 3);
    matrix2.set(1, 0, 2); matrix2.set(1, 1, 7); matrix2.set(1, 2, 1);

    matrix3 = matrix1 - matrix2;
    QCOMPARE(matrix3.get(0, 1), -3);
    QCOMPARE(matrix3.get(1, 0), 1);
    QCOMPARE(matrix3.get(1, 1), -5);

}

void CppTestsTest::matrix_multNumber()
{
    Matrix matrix3(2, 3);
    matrix3.set(0, 0, 3); matrix3.set(0, 1, -3); matrix3.set(0, 2, 1);
    matrix3.set(1, 0, 5); matrix3.set(1, 1, -5); matrix3.set(1, 2, 5);
    matrix3 = matrix3 * 4;
    QCOMPARE(matrix3.get(0, 1), -12);
    QCOMPARE(matrix3.get(0, 2), 4);
    QCOMPARE(matrix3.get(1, 1), -20);

}

void CppTestsTest::matrix_mult()
{
    Matrix matrix4(3, 3), matrix5(2, 3), matrix1(2, 3);
    matrix1.set(0, 0, 2); matrix1.set(0, 1, 1); matrix1.set(0, 2, 4);
    matrix1.set(1, 0, 3); matrix1.set(1, 1, 2); matrix1.set(1, 2, 5);
    matrix4.set(0, 0, 0); matrix4.set(0, 1, -2); matrix4.set(0, 2, 3);
    matrix4.set(1, 0, 1); matrix4.set(1, 1, 3); matrix4.set(1, 2, 4);
    matrix4.set(2, 0, 6); matrix4.set(2, 1, 2); matrix4.set(2, 2, -1);

    matrix5 = matrix1 * matrix4;
    QCOMPARE(matrix5.get(0, 0), 25);
    QCOMPARE(matrix5.get(0, 1), 7);
    QCOMPARE(matrix5.get(0, 2), 6);
    QCOMPARE(matrix5.get(1, 0), 32);
    QCOMPARE(matrix5.get(1, 1), 10);
    QCOMPARE(matrix5.get(1, 2), 12);

}

QTEST_APPLESS_MAIN(CppTestsTest)

#include "tst_cppteststest.moc"
