#include <stdio.h>

double calculoJuros(double c, int m, double t){

    double juros = c*m*t;
    return juros;
}

int main(){
    printf("%.2lf", calculoJuros(1,3,1.5));
}
