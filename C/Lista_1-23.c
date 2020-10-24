#include <stdio.h>
#include <math.h>

float A = 0;

void latas () {

    float C = 0;

    int L = 0, V = 0;

    printf ("Para lata de tinta, temos:\n");

    if (A <= 128) {

        printf ("A quantidade de latas de tinta a serem compradas e de 1 e o preco total de 80 reais.\n", L, C);

    }

    else {

        V = A / 6;

        L = V / 18;

        C = L * 80;

        printf ("A quantidade de latas de tinta a serem compradas e de %d e o preco total de %.0f reais.\n\n", L, C);

    }

}

void galoes () {

    float C = 0;

    int G = 0, V = 0;

    if (A <= 21.6) {

        printf ("A quantidade de galoes de tinta a serem compradas e de 1 e o preco total de 25 reais.\n", G, C);

    }

    else {

        V = A / 6;

        G = V / 3.6;

        C = G * 25;

        printf ("A quantidade de galoes de tinta a serem compradas e de %d e o preco total de %.2f reais.\n\n", G, C);

    }

}

void barato () {

    float C = 0;

    int G = 0, V = 0, L = 0;

    if (A <= 64.8) {

        printf ("E mais barato comprar 3 galoes de tinta e o preco total de 75 reais.\n", G, C);

    }

    else {

        V = A / 6;

        L = V / 18;

        C = L * 80;

        printf ("E mais barato comprar %d latas de tinta e o preco total de %.2f reais.\n\n", L, C);    

    }

}

int main() {

    printf ("Qual a area (em m2) a ser pintada? ");

    scanf ("%f", &A);

    latas ();

    galoes ();

    barato ();

    return 0;

}
