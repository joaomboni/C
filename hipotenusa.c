#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
  float cateto1, cateto2, soma, hip;
  printf("Digite o primeiro lado: ");
  scanf("%f%f", &cateto1, &cateto2);
  soma = cateto1 + cateto2;
  hip = sqrt(soma);
  printf("\nA medida da hipotenusa e: %.2f", hip);
return 0;

}
