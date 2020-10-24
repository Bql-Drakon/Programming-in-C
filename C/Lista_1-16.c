#include <stdio.h>
#include <math.h>

void main() {

   int Y, N, X, n = 0;

   float R = 0.0;

   printf("\nInforme um numero inteiro: ");

   scanf("%d", &Y);

   N = Y;

   for (N = Y; N != 0; ++n) {

       N /= 10;

   }

   for (N = Y; N != 0; N /= 10) {

       X = N % 10;

      R += pow(X, n);

   }

   if ((int)R == Y)

    printf("\n%d e um numero de Armstrong.\n", Y);

   else

    printf("\n%d nao e um numero de Armstrong.\n", Y);

}