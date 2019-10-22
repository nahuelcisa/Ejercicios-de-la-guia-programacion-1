#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Los numeros de 3 en 3 que hay entre 1 y 100 son: \n");

   for(int i = 0; i < 101; i++){
        if(i%3 == 0){
            printf("%d\n",i);

        }

   }

    return 0;
}
