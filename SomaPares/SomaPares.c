#include <stdio.h>

int somaPares(int a, int b){
    int soma =0;
    for(a+1;a<b;a++){
        if(a % 2 == 0){
            soma+=a;
        }
    }
    return soma;
}
int main(){
    printf("%d\n",somaPares(1,10));
}
