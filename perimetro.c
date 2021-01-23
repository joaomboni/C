#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Calcula o perímetro e a area de uma circunferencia,
 de um raio R (fornecido pelo usuario)*/

void main()
{
    float raio, perim, PI;
    PI = 3.1415;
    printf("\nQual a medida do raio? ");
    scanf("%f", &raio);

    perim = 2*PI*raio;
    printf("\nO perimetro e %.2f", perim);

    getch();

    return 0;
}

