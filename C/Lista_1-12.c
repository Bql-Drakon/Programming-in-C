#include <stdio.h>
#include <math.h>

void main ()

{

    float G = 0, t = 0, V = 0;

    printf("Informe o quanto voce ganha por hora: ");

    scanf("%f", &G);

    printf("Informe o numero de horas trabalhadas no mes: ");

    scanf("%f", &t);

    V = G * t;

    printf("O salario do mes e: %.2f", V);

}