#include <stdio.h>
#include <stdlib.h>


void changeNum(int* a, int* b);
int main()
{
    int x;
    int y;

    printf("Ingrese un numero para X: ");
    scanf("%d",&x);
    printf("Ingrese un numero para Y: ");
    scanf("%d",&y);

    printf("el valor de x: %d el valor de y: %d \nintercambiados seria:",x,y);
    changeNum(&x,&y);
    printf("\nx : %d   y: %d",x,y);

    return 0;
}

void changeNum(int* a, int* b){

int aux;

aux = *a;
*a = *b;
*b = aux;
}
