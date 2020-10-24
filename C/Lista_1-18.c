#include <stdio.h>
#include <math.h>

void main() {

    int R = 0, A = 0;

    char L;

    while (1) {

        printf("\nInforme o raio da circunferencia: ");

        scanf("%f", &R);

        A = M_PI * R * R;

        printf("\nA area da circunferencia e: %2f", A);

        printf("\nVoce deseja continuar a operacao? (S ou N) : ");

        scanf("%s", &L);

        if (L == 'N' || L == 'n') {

            break;

        }

    }

}
