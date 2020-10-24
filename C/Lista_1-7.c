#include <stdio.h>
#include <math.h>

int main() 

{

    float A = 0, R = 0;

    printf("Informe o raio da circunferencia: ");

    scanf("%f", &R);

    A = M_PI * R * R;

    printf("A area da circunferencia e %.2f" ,A);

    return 0;

}