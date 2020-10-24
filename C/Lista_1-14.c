#include <stdio.h>
#include <math.h>

int main() 

{

    int x = 0, N = 0, E = 0, S = 0, R = 0, V = 0, T = 0, P = 0;

    printf("Digite o nome do funcionario: ");

    scanf(&N);

    printf("O funcionario trabalho em um dia e saiu no outro? (S / N): ");

    scanf(&R);

    printf("Digite o horario de entrada: ");

    scanf("%f", &E);

    printf("Digite o horario de saida: ");

    scanf("%f", &S);

    if (R = "S")

    {

        T = S - E + 24;

    }

    if (R = "N")

    {
    
        T = S - E;

    }

    if (T < 4)

    {
    
        V = T * 30;

    }

    if (T >= 4 && T <= 8)

    {
    
        V = T * 70;

    }

    if (T > 8 && T <= 36)

    {
    
        V = T * 90;

    }

    else
    {
        
        printf("Tempo de trabalho ultrapassado do limite de 36 horas!");

    }

    printf("O funcionario %N trabalhou %dT, logo seu perfil é %P e seu salario e de %dV", N, T, P, V);

    return 0;

}
