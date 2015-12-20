#ifndef KILOMETRESTOMILES_H
#define KILOMETRESTOMILES_H


class KilometresToMiles
{
    double km;
    double mile;
    double kilometer;
    double m;
    static const int tableSize = 400;
    int lengthTable;
    double miles[tableSize];
    double kilometers[tableSize];

public:    
    /// Где const ключевые слова?? Можно же их поставить?
    KilometresToMiles(double km);
    void getRow(int number, double arr[2]);
    void makeTable();
};

#endif // KILOMETRESTOMILES_H
