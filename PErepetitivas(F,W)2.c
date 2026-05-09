#include <stdio.h>

void main()
{
    int num, i;
    int positivos = 0, negativos = 0, nulos = 0;

    for(i = 1; i <= 100; i++)
    {
        printf("Dame un numero: ");
        scanf("%d", &num);

        if(num > 0)
        {
            positivos++;
        }
        else
        {
            if(num < 0)
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
