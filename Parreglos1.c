#include <stdio.h>

void main()
{
    int arreglo[100];
    int i, n;
    int suma = 0;

    printf("Cuantos elementos tendra el arreglo: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Dame el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);

        suma = suma + arreglo[i];
    }

    printf("La suma de los elementos es: %d\n", suma);
}
