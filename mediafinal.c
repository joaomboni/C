#include <stdio.h>
#include <stdlib.h>

void main()
{
  float nota1, nota2, media;
  printf("Digite sua primeira nota:\n");
  scanf("%f", &nota1);

  printf("Digite sua segunda nota:\n");
  scanf("%f", &nota2);

  media = (nota1 + nota2)/2;


  printf("\nSua media final e: %.2f", media);

    getch();
  return 0;

}
