#include <stdio.h>
#include <math.h>

void cilindrica ()

{

    float R = 0, h = 0, V = 0;

    printf("Informe o valor do raio: ");

    scanf("%f", &R);

    printf("Informe o valor da altura: ");

    scanf("%f", &h);

    V = M_PI * R * R * h;

    printf("O volume da caixa cilindrica e: %2f", V);

}

void retangular ()

{

    float c = 0, h = 0, l = 0, V = 0;

    printf("Informe o valor do comprimento: ");

    scanf("%f", &c);

    printf("Informe o valor da altura: ");

    scanf("%f", &h);

    printf("Informe o valor da largura: ");

    scanf("%f", &l);

    V = c * h * l;

    printf("O volume da caixa cilindrica e: %2f", V);

}

int main() 

{

    int x = 0;

    printf("Digite o numero para a opcao de sua escolha: ");

    printf("1 - Caixa cilindrica\n");

    printf("2 - Caixa retangular\n");
    
    printf("Opcao a ser escolhida (numero): ");

    scanf("%d", &x);

    switch (x)

    {

        case 1:

            cilindrica ();

        break;

        case 2:

            retangular ();

        break;

        default:

            printf("Opcao invalida!");

    }

    return 0;

}
