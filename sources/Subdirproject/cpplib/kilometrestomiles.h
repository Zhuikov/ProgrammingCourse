#ifndef KILOMETRESTOMILES_H
#define KILOMETRESTOMILES_H


class KilometresToMiles
{
    const double km;
    double mile;
    double kilometer;
    double m;
    static const int tableSize = 400;
    int lengthTable;
    double miles[tableSize];
    double kilometers[tableSize];

public:
    KilometresToMiles(const double km);
    void getRow(const int number, double arr[2]);
    void makeTable();
};

#endif // KILOMETRESTOMILES_H
