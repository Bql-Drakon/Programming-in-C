#include <stdio.h>
#include <math.h>

void main () {

    float V = 0, T = 0, S = 0;

    printf ("\nInforme o tamanho do arquivo em MB: ");

    scanf("%f", &T);

    printf ("\nInforme a velocidade da internet em MBps: ");

    scanf("%f", &V);

    S = (T / V) * 60;

    printf ("\nO tempo, aproximado, de download e de %.0f minutos.", S);

}
