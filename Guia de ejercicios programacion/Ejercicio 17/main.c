#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Ingrese un numero: ");
    scanf("%d",&num);

        if(num %2 == 0){
            printf("El numero que usted ingreso es par\n");
            }else{
            printf("El numero que usted ingreso es impar\n");
            }
    return 0;
}
