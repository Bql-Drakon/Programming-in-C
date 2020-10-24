#include <stdio.h>
#include <math.h>

void main ()

{

    int h = 0, m = 0, s = 0;

    printf("Informe a quantidade de minutos: ");

    scanf("%d", &m);
    
    h = m / 60;

    m = m % 60;

    s = h % m;
    
    printf("Isso e igual a %dh, %dm e %ds", h, m, s);

}