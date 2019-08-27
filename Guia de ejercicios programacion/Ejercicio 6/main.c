#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int contP = 0;
    int contN = 0;
    int cont = 0;

    do{
        cont ++;
        printf("Ingrese un numero: ");
        scanf("%d", &num);

        if(num>0){
            contP ++;
        }else{
            contN++;
        }


    }while(cont<10);

    printf("La cantidad de numeros mayores a cero es: %d y la cantidad de numeros menores a cero es: %d",contP,contN);


    return 0;
}
