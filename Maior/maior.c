#include <stdio.h>

double maior(double x, double y){
    double maior = x;
    if(y > x){
        maior = x;
    }
    return maior;
}

int main(){
    printf("%.1lf", maior(1,1));

    return 0;
}
