#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base;
    int altura;
    float superficie;

    printf("Ingrese la base del triangulo: ");
    scanf("%d",&base);
    fflush(stdin);
    printf("Ingrese la altura del triangulo: ");
    scanf("%d", &altura);

    superficie = (float) (base * altura) / 2;

    printf("La superficie del triangulo ingresado es %.2f",superficie);




    return 0;
}
