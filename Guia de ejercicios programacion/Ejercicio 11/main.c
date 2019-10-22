#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Entre 0 y 100 los numeros pares que hay son: \n");

   for(int i = 0; i < 101; i++){
        if(i%2 == 0){
            printf("%d\n",i);

        }

   }

    return 0;
}
