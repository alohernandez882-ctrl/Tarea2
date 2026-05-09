#include <stdio.h>

void main()
{
    int i, suma = 0;

    for(i = 10; i <= 50; i++)
    {
        if(i % 2 == 0)
        {
            suma = suma + i;
        }
    }

    printf("La suma de los numeros pares es: %d\n", suma);
}
