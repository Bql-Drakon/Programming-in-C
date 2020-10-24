#include <stdio.h>
#include <math.h>

void main ()

{

    int N = 0, R = 0, i = 0;

    printf("Informe o numero a ser calculado: ");

    scanf("%d", &N);

    R = N;

    for (i = N - 1; i >= 1; i--)

    {

        R = R * i;

    }

    printf("O valor do fatorial e: %d", R);

}