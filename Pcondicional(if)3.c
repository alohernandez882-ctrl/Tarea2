#include <stdio.h>

void main()
{
    float distancia_ida, distancia_total, dias, precio, descuento = 0, total;

    printf("Dame la distancia de ida en kilometros: ");
    scanf("%f", &distancia_ida);

    printf("Dame el numero de dias de estancia: ");
    scanf("%f", &dias);

    distancia_total = distancia_ida * 2;
    precio = distancia_total * 0.23;

    if(dias > 7 && distancia_total > 800)
    {
        descuento = precio * 0.30;
    }

    total = precio - descuento;

    printf("La distancia total ida y vuelta es: %.2f km\n", distancia_total);
    printf("El precio sin descuento es: %.2f\n", precio);
    printf("El descuento aplicado es: %.2f\n", descuento);
    printf("El precio total del ticket es: %.2f\n", total);
}
