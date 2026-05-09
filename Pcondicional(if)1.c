#include <stdio.h>

void main()
{
    float compra, descuento = 0, total;

    printf("Dame el monto de la compra: ");
    scanf("%f", &compra);

    if(compra > 2500)
    {
        descuento = compra * 0.08;
    }

    total = compra - descuento;

    printf("El descuento aplicado es: %.2f\n", descuento);
    printf("El total a pagar es: %.2f\n", total);
}
