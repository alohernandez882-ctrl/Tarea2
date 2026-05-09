#include <stdio.h>

void main()
{
    float radio;
    float area, circunferencia;
    float pi = 3.1416;

    //Pedir datos
    printf("Dame el radio del circulo: ");
    scanf("%f", &radio);

    //Operaciones
    area = pi * radio * radio;
    circunferencia = 2 * pi * radio;

    //Imprimir resultados
    printf("El area del circulo es: %f\n", area);
    printf("La circunferencia del circulo es: %f\n", circunferencia);
}
