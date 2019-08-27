#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int resta;


      printf("Ingrese un numero: ");
      scanf("%d", &num1);

      fflush(stdin);


      printf("Ingrese otro numero: ");
      scanf("%d", &num2);

    resta = num1 - num2;

    if(resta>0){
        printf("Resultado positivo.");
    }else{
        printf("Resultado negativo.");
    }


    return 0;
}
