#include <stdio.h>


double delta(double a, double b, double c){

    double delta = (b*b) - 4 *a*c;
    return delta;
}

int main(){

    printf("%.1lf",delta(1,2,3));

    return 0;
}
