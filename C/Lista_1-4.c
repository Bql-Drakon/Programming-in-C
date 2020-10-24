#include <stdio.h>

int main() 

{

    float N1 = 0, N2 = 0, N3 = 0, N4 = 0, R = 0;

    printf("Informe a nota do primeiro bimeste: ");

    scanf("%f", &N1);

    printf("Informe a nota do segundo bimeste: ");

    scanf("%f", &N2);

    printf("Informe a nota do terceiro bimeste: ");

    scanf("%f", &N3);

    printf("Informe a nota do quarto bimeste: ");

    scanf("%f", &N4);

    R = (N1 + N2 + N3 + N4) / 4;

    printf("A soma dos numeros  %.2f" ,R);

    return 0;

}