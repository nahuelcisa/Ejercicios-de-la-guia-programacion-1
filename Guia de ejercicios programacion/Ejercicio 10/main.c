#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 0;

   for(int i = 0; i < 101; i++){
        if(i%2 != 0){
            printf("%d\n",i);
            cont++;
        }

   }

    printf("\nEntre 0 y 100 hay %d numeros impares\n\n",cont);
    return   0;
}
