#include <stdio.h>
#define MILE_UNIT 1.61

double toKM(double);
void createConvertionTable();

int main()
{
    createConvertionTable();
    return 0;
}

double toKM(double km)
{
    return (km * MILE_UNIT);
}

void createConvertionTable()
{
    int i = 5;

    while (i <= 100)
    {
        double iToKM = toKM(i);
        printf("\n %3d mile = %.2lfkm", i, iToKM);
        i += 5;
    }
}