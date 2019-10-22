#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    float peso;
    int mayores = 0;
    int menores = 0;
    char respuesta = 'n';

    do{
        printf("\nIngrese su peso:");
        scanf("%f",&peso);
        if(peso < 80){
            menores++;
        }else if(peso > 80){
            mayores++;
        }

        printf("Desea continuar? s/n: ");
        respuesta = getche();
        printf("\n\n");
    }while(respuesta == 's');

    printf("La cantidad de personas que su peso superan los 80 kg son: %d y la que no lo superan los 80Kg son: %d",mayores,menores);
    return 0;
}
