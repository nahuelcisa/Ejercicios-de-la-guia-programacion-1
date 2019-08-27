#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num;
    int cuadrado;
    char respuesta = 's';
    do{


    do{
        printf("\nIngrese un numero: ");
        scanf("%d", &num);
        if(num<=0){
            printf("ERROR, el numero debe ser mayor que cero");
        }

    }while(num<=0);


    cuadrado = num * num;

    printf("El cuadrado del numero que ingreso es %d",cuadrado);


        printf("\nDesea hacer otro calculo?");
        fflush(stdin);
        respuesta = getche();

    }while(respuesta != 'n');


    return 0;
}
