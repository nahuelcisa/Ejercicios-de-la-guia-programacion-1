#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 ;
    int num2 ;
    int suma;

    printf("Ingrese un numero: ");
    scanf("%d",&num1);
    fflush(stdin);
    printf("Ingrese otro numero: ");
    scanf("%d", &num2);

    suma = num1 + num2;

    printf("La suma de ambos numeros es: %d",suma);
    return 0;
}
