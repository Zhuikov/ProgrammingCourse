#ifndef KILOMETRESTOMILES_H
#define KILOMETRESTOMILES_H


class KilometresToMiles
{
    double km;
    double mile;
    double kilometer;
    double m;
    int lengthTable;
    double miles[400];
    double kilometers[400];

public:    
    KilometresToMiles(double km);
    void getRow(int number, double arr[2]);
    void showTable();
    void makeTable();
};

#endif // KILOMETRESTOMILES_H
