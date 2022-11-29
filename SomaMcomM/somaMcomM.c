#include <stdio.h>

int SomaMcomM(int a,int b,int c){

    int vet[3] = {a,b,c};
    int maior = a, menor = a;
    for(int i=0;i<3;i++){
        if(b>a && b>c){
            maior = b;
        }else{
            menor = b;
        }
        if(c>a && c>b){
            maior = c;
        }else{
            menor = c;
        }
    }
    int calculo = maior + menor;

    return calculo;
}
int main(){

    printf("%d",SomaMcomM(5,2,0));
    return 0;
}
