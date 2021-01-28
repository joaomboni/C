#include <stdio.h>
#include <stdlib.h>
//SEQUENCIA DE FIBONACCI.
/*. A série de Fibonacci é 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Os dois
primeiros termos são iguais a 1 e, a partir do terceiro, o termo é dado pela
soma dos dois termos anteriores.*/
int main()
{
   int a, b, fb, i, n; // VARIAVEIS.

   a = 0; // VARIAVEL A RECEBE ZERO.
   b = 1; // VARIAVEL B RECEBE UM.

   printf("Digite a contidade de numeros desejados:\n\n"); // PEDE UM NUMERO.
   scanf("%d", &n); // NUMERO FICA SALVO EM N.
   printf("\n\nSerie de fibonacci:\n\n");
   printf("%d\n", a); // INICIA COM ZERO.

   for(i = 0; i < n; i++){ // QUANDO I VALE ZERO; I MENOR QUE N; I + I
    fb = a + b; // A + B FICA SALVO EM FB.
    a = b; // A RECEBE B.
    b = fb; // B RECEBE FB.
    printf("%d\n", fb); // PRINTF FB.
   }

    system("pause");
    getch();
    return 0;
}
