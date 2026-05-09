#include <stdio.h>

void main()
{
    float dinero, interes;
    float ganancia, monto;

    //Pedir datos
    printf("Dame la cantidad de dinero invertida: ");
    scanf("%f", &dinero);

    printf("Dame la tasa de interes mensual: ");
    scanf("%f", &interes);

    //Operaciones
    ganancia = dinero * interes / 100;
    monto = dinero + ganancia;

    //Imprimir resultados
    printf("La ganancia mensual es: %f\n", ganancia);
    printf("El monto final es: %f\n", monto);
}
