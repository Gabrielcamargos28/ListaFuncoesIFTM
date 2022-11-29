#include <stdio.h>

double SomaPA(double a1, double an, double n)
{
    double somaN = n*(a1 + an) / 2;
    return somaN;
}

int main()
{
    printf("%.1lf", SomaPA(2,200,100));

    return 0;
}
