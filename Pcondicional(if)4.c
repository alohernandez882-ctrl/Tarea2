#include <stdio.h>

void main()
{
    int num1, num2;

    printf("Dame el primer numero entero: ");
    scanf("%d", &num1);

    printf("Dame el segundo numero entero: ");
    scanf("%d", &num2);

    if(num1 == 0 || num2 == 0)
    {
        printf("No se puede determinar porque hay un cero.\n");
    }
    else
    {
        if(num1 % num2 == 0)
        {
            printf("El segundo numero es divisor del primero.\n");
        }
        else
        {
            if(num2 % num1 == 0)
            {
                printf("El primer numero es divisor del segundo.\n");
            }
            else
            {
                printf("Ningun numero es divisor del otro.\n");
            }
        }
    }
}
