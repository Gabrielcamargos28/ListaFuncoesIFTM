#include <stdio.h>

int QuadradoOuRetangulo(int b, int h){

    if(b == h){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    printf("%d", QuadradoOuRetangulo(5,5));
    return 0;
}
