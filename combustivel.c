#include <stdio.h>
#include <stdlib.h>

 void main()
{
   float dist, comb, cons;
   printf("Digite a distancia (Km):\n");
   scanf("%f", &dist);
   printf("Digite o volume gasto de combustivel (L):\n");
   scanf("%f", &comb);

   cons = dist / comb;

   printf("\nSeu consumo medio de combustivel e de: ");
   printf("%.2f KM/L\n", cons);
    getch();
    return 0;
}
