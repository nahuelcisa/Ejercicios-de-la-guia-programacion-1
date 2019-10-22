#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   int cont = 0;
   int mayor;
   int flag = 0;
   do{
    printf("Ingrese numero:");
    scanf("%d",&num);

    if(mayor<num || flag ==0){
        mayor = num;
    }
    cont++;
   }while(cont<3);

   printf("El numero mas grande ingresado es: %d\n\n",mayor);
    return 0;
}
