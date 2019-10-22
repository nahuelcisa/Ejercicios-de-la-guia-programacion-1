#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int cont = 0;

    printf("Ingrese numero: ");
    scanf("%d",&num);

    for(int i=0;i < num;i++){
    if(i%3 ==0){
        cont++;
    }
    }
    printf("Hay %d multiplos de 3 entre el 1 y su numero cargado.\n\n",cont);
    return 0;
}
