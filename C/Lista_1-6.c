#include <stdio.h>

int main() 

{

    float N1 = 0, R = 0;

    printf("Informe a distancia em metros: ");

    scanf("%f", &N1);

    R = N1 * 100;

    printf("A distancia em centimetros e %.2f" ,R);

    return 0;

}