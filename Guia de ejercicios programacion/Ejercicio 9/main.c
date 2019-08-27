#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    char letra;
    int contA = 0;
    int contE = 0 ;
    int contI = 0 ;
    int contO = 0 ;
    int contU = 0 ;
    int cont = 0  ;
    do{
        cont ++;
        printf("\nIngrese una letra: ");
        fflush(stdin);
        letra = getche();

        if(letra == 'a'){
            contA++;
        }
        if(letra == 'e'){
            contE ++;
        }
        if(letra == 'i'){
            contI ++;
        }
        if(letra == 'o'){
            contO ++;
        }
        if(letra == 'u'){
            contU ++;
        }


    }while(cont<20);

    printf("\nUsted ingreso la letra A %d  veces, la letra E %d  veces, la letra I %d  veces, la letra O %d  veces y la letra U %d  veces",contA,contE,contI,contO,contU);


    return 0;
}
