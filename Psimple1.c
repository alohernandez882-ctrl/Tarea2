#include <stdio.h>

void main()
{
    float num1, num2;
    float suma, resta, mult;

    //Pedir datos
    printf("Dame el primer numero: ");
    scanf("%f", &num1);

    printf("Dame el segundo numero: ");
    scanf("%f", &num2);

    //Operaciones
    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;

    //Imprimir resultados
    printf("La suma es: %f\n", suma);
    printf("La resta es: %f\n", resta);
    printf("La multiplicacion es: %f\n", mult);
}
