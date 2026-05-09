#include <stdio.h>

void main()
{
    int arreglo[100];
    int i, n, numero;
    int contador = 0;

    printf("Cuantos elementos tendra el arreglo: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Dame el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    printf("Dame el numero a buscar: ");
    scanf("%d", &numero);

    for(i = 0; i < n; i++)
    {
        if(arreglo[i] == numero)
        {
            contador++;
        }
    }

    printf("El numero aparece %d veces\n", contador);
}
