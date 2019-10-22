#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Ingrese un numero: ");
    scanf("%d",&num);

        if(num >= 0){
            printf("El numero que usted ingreso es positivo\n");
            }else{
            printf("El numero que usted ingreso es negativo\n");
            }
    return 0;
}
