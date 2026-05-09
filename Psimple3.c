#include <stdio.h>

void main()
{
    float dolares, pesos;

    //Pedir datos
    printf("Dame la cantidad de dolares: ");
    scanf("%f", &dolares);

    //Conversion
    pesos = dolares * 11.96;

    //Imprimir resultado
    printf("La cantidad en pesos es: %f\n", pesos);
}
