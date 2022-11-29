#include <stdio.h>
#include <math.h>

double delta(double a, double b, double c){
    double delta = (b*b) - (4 * a * c);
    return delta;
}

void raizes(double a, double b, double c){

    double d = delta(a, b, c);

    if(d < 0){
        printf("Nao existem raizes!\n");
    }
    else{

        if(d == 0){
            printf("%lf\n", (-b / 2*a));
        }
        else if(d > 0){

            double raizP = (-b + sqrt(d)) / (2 * a);
            double raizN = (-b - sqrt(d)) / (2 * a);

            printf("%lf\n", raizP);
            printf("%lf\n", raizN);
        }

    }

}



int main(){

    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    raizes(a, b, c);

    return 0;
}
}
}
}
