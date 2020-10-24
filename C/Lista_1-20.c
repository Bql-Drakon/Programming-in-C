#include <stdio.h>
#include <math.h>

void main () {

    float m = 0, h = 0;

    printf("Informe a sua altura: ");

    scanf("%f", &h);
    
    m = (72.7 * h) - 58;
    
    printf("Seu peso ideal e: %.2f", m);

}