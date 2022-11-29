#include <stdio.h>

void Divisor(int n){
    for(int i=1;i<=n;i++){
        if(n % i == 0){
            printf("%d\n",i);
        }
    }
}

int main(){
    Divisor(66);
    return 0;
}
