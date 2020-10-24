#include<stdio.h>

#include<math.h>

long int N = 0, x = 0, i = 0, S = 0, R = 0;

int main()

{

    printf("Informe uma quantidade N de elementos reais a serem digitados:\n");

    scanf("%d", &N);

    printf("Informe o valor de x a ser calculado:\n");

    scanf("%d", &x);

    for (i = 1; i <= N; i++)

    {

        S = S + x * x;

    }

    R = sqrt(S/N);

    printf("Resultado da somatoria = %d\n", S);

    printf("Resultado da operacao = %d\n", R);

}