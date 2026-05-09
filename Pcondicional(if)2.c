#include <stdio.h>

void main()
{
    float sueldo, aumento, total;

    printf("Dame el sueldo del trabajador: ");
    scanf("%f", &sueldo);

    if(sueldo < 1000)
    {
        aumento = sueldo * 0.15;
    }
    else
    {
        aumento = sueldo * 0.12;
    }

    total = sueldo + aumento;

    printf("El aumento es: %.2f\n", aumento);
    printf("El sueldo con aumento es: %.2f\n", total);
}
