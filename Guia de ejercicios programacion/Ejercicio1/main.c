#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int cont = 0;
    int acumulador = 0;
    float promedio;


    do{
        cont ++;
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        acumulador += num;


    }while(cont<5);

    promedio = (float) acumulador / 5;

    printf("La media de los numeros ingresados es %.2f ",promedio);

    return 0;
}
