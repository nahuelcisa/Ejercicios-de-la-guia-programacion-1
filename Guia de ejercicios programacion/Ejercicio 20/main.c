#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;


    printf("Ingrese numero: ");
    scanf("%d",&num);

    for(int i=0;i <= num;i++){

    if(i > 0){
        printf("%d \n",i);
    }
    }
    return 0;
}
