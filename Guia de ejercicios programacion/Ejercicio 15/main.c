#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Los numeros multiplos de 6 entre 1 y 100 son: \n");

   for(int i = 0; i < 101; i++){
        if(i%6 == 0){
            printf("%d\n",i);

        }

   }

    return 0;
}
