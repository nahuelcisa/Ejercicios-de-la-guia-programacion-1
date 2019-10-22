#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int resultado;

    printf("Ingrese numero: ");
    scanf("%d",&num);

    for(int i=1;i < num;i++){
    resultado = num - i;
    if(resultado!= 0){
        printf("%d \n",resultado);
    }
    }
    return 0;
}
