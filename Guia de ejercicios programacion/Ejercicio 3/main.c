#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int cuadrado;
    int producto;

      system("cls");

      do{
      printf("Ingrese un numero: ");
      scanf("%d", &num1);

      fflush(stdin);


      printf("Ingrese otro numero: ");
      scanf("%d", &num2);
      }while(num1 == 0 || num2 == 0);


      cuadrado = num1 * num1;
      producto = num1 * num2;

      printf("El producto de ambos numeros es : %d y el cuadrado del primer numero ingresado es : %d", producto, cuadrado);






    return 0;
}
