#include <stdio.h>
#include <math.h>

int main() 

{

    float l = 0, A = 0, R = 0;

    printf("Informe a medida do lado do quadrado: ");

    scanf("%f", &l);

    A = l * l;

    R = A * 2;

    printf("O dobro da area do quadrado e %.2f" ,R);

    return 0;

}