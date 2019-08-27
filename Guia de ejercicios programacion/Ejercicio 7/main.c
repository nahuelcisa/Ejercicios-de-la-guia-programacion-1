#include <stdio.h>
#include <stdlib.h>

int main()
{
    int radio;
    float longitud;
    float area;

    printf("Ingrese el radio del circulo: ");
    scanf("%d",&radio);

    longitud = 2 * 3.14 * radio;
    area = 3.14 * (radio * radio);

    printf("La longitud del circulo ingresado es %.2f metros  y su area es: %.2f metros.",longitud,area);


    return 0;
}
