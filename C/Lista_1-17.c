#include <stdio.h>
#include <math.h>

void main() {

    int N1 = 0, N2 = 0;

    printf("\nInforme o penultimo numero de seu RA: ");

    scanf("%d", &N1);

    printf("\nInforme o ultimo numero de seu RA: ");

    scanf("%d", &N2);

    if ((N1 > N2 && 2 < N1 && 5 > N2) || (13 + N2) > (10 + N1) && (N2 != 2) || !(N1 > 2))
    
    {

        printf("\nRegra a (verdadeira).\n");

    }

    if ((N1 < N2 && 3 == N1 && 5 < N2) || (100 + N2) > (101 + N1) || (N2 == 3) && !(N1 <4))
    
    {

        printf("\nRegra b (verdadeira).\n");

    }

    else

    {

        printf("\nNenhuma das regras sao possiveis.\n");

    }

}