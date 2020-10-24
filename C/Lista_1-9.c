#include <stdio.h>
#include <math.h>

int main() 

{

    float v = 0, d = 0, t = 0, D = 0, T = 0;

    printf("Informe a distancia percorrida pelo projetil: ");

    scanf("%f", &d);

    printf("Informe o tempo decorrido pelo projetil: ");

    scanf("%f", &t);

    D = d / 1000;

    T = t * 60;

    v = D / T;

    printf("A velocidade do projetil em m/s e %2f" ,v);

    return 0;

}