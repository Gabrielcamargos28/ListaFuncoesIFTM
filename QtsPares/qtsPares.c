#include <stdio.h>

int qtdPares(int a, int b, int c)
{
    int cont = 0;
    int vet[3] = {a,b,c};
    for(int i=0; i<3; i++)
    {
        if( vet[i] % 2 == 0)
        {
            cont++;
        }
    }
    return cont;
}

int main()
{
    printf("%d",qtdPares(2,1,1));
}
