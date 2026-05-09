#include <stdio.h>

void main()
{
    int N, i, resultado;

    printf("Dame un numero entero: ");
    scanf("%d", &N);

    for(i = 1; i <= 10; i++)
    {
        resultado = N * i;

        printf("%d x %d = %d\n", N, i, resultado);
    }
}
