#include <stdio.h>
#include <math.h>

void main () {

    float A = 0, C = 0;

    int L = 0, V = 0;

    printf ("Qual a area (em m2) a ser pintada? ");

    scanf ("%f", &A);

    if (A <= 54) {

        printf ("A quantidade de latas de tinta a serem compradas e de 1 e o preco total de 80 reais.", L, C);

    }

    else {

        V = A / 3;

        L = V / 18;

        C = L * 80;

        printf ("A quantidade de latas de tinta a serem compradas e de %d e o preco total de %.0f reais.", L, C);

    }

}