#include <stdio.h>

void main()
{
    int N, i;
    int producto = 1;

    printf("Dame el valor de N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        producto = producto * i;
    }

    printf("El producto de los primeros numeros naturales es: %d\n", producto);
}
