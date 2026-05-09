#include <stdio.h>

void main()
{
    int arreglo[100];
    int i, n;
    int positivos = 0, negativos = 0, nulos = 0;

    printf("Cuantos elementos tendra el arreglo: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Dame el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);

        if(arreglo[i] > 0)
        {
            positivos++;
        }
        else
        {
            if(arreglo[i] < 0)
            {
                negativos++;
            }
            else
            {
                nulos++;
            }
        }
    }

    printf("Cantidad de positivos: %d\n", positivos);
    printf("Cantidad de negativos: %d\n", negativos);
    printf("Cantidad de nulos: %d\n", nulos);
}
