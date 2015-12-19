#include <QString>
#include <QtTest>
#include <math.h>
#include "length_of_segment.h"
#include "equation.h"
#include "stringsx.h"


int double_compare(double a, double res){

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

//int compare_strings(char str1 [], char str2 [])
//{
//    for (int i = 0; i < (int)strlen(str1); i++)
//        if (str1[i] != str2[i]) return 0;
//    return 1;
//}


class TestTest : public QObject
{
    Q_OBJECT

public:
    TestTest();

private Q_SLOTS:
    void length_test();
    void equation_test();
   // void string_test();

};

TestTest::TestTest() {}

void TestTest::length_test()
{
    Point A, B, C, D, E, F;
    A.x = 0; A.y = 0; B.x = 3; B.y = 4; C.x = 30; C.y = 20;
    D.x = 1; D.y = 1; E.x = 16; E.y = 16; F.x = -4; F.y = -10;
    QVERIFY2(double_compare(length_of_segment(A, B), 5), "Length fail");
    QVERIFY2(double_compare(length_of_segment(C, D), 34.66987), "Length fail");
    QVERIFY2(double_compare(length_of_segment(E, F), 32.80244), "Length fail");
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

//void TestTest::string_test()
//{
//    struct Competitors comp;
//    char str[24], name[12];
//    int i, results[3];

//    strcpy(str, "Ivanov D.L. 500 403 555");
//    strcpy(name, "Ivanov D.L. ");
//    i = parse_name(str, &comp);
//    parse_results(i, str, results);

//    QVERIFY2(compare_strings(comp.name, name), "Fail string name");

//}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"
