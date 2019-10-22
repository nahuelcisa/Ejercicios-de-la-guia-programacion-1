#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int suma = 0;
    int producto = 1;


    for(int i = 0; i <= 10; i++){
        printf("Ingrese numero: ");
        scanf("%d",&num);
        while(num == 0){
            printf("ERROR.Ingrese numero: ");
            scanf("%d",&num);
        }
        if(num>0){
            suma = suma + num;
        }else{
            producto = num * producto;
        }
    }
    printf("La suma de los positivos es : %d \nEl producto de los negativos es: %d",suma,producto);
    return 0;
}
