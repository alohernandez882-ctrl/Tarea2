#include <stdio.h>

void main()
{
    int arreglo[100];
    int i, num = 2;

    for(i = 0; i < 100; i++)
    {
        arreglo[i] = num;

        num = num + 2;
    }

    printf("Los 100 primeros numeros pares son:\n");

    for(i = 0; i < 100; i++)
    {
        printf("%d\n", arreglo[i]);
    }
}
