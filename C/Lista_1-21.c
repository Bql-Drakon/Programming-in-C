#include <stdio.h>
#include <math.h>

float P = 0;

void adequado () {

    float M = 0, E = 0;

    printf("O peso excedente de peixe e de: %.2f e a multa a ser paga de %.2f reais.", E, M);

}

void excesso () {

    float M = 0, E = 0;

    E = P - 50;

    M = 4 * E;

    printf("O peso excedente de peixe e de: %.2f e a multa a ser paga de %.2f reais.", E, M);

}

int main() {

    printf("Informe o peso de peixes: ");

    scanf("%f", &P);

    if (P <= 50) {

        adequado ();

    }

    else {

        excesso ();

    }

    return 0;

}
