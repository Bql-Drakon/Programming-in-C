#include <stdio.h>

int main() 

{

    float F = 0, C = 0;

    printf("Informe a temperatura em graus Fahrenheit: ");

    scanf("%f", &F);

    C = (5 * (F - 32)) / 9;

    printf("A temperatura em graus Celsius e %.2f" ,C);

    return 0;

}