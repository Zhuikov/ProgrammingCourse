#include <QString>
#include <QtTest>
#include "matrix.h"

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
    Matrix matrix(3, 8);
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(CppTestsTest)

#include "tst_cppteststest.moc"
