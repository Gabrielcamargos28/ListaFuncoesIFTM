#include <stdio.h>


int ateN(int n){

    for(int i=1;i<n;i++){
        printf("%d ",i);
    }
}

int main(){
    printf("%d",ateN(10));
}
