#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float peso, altura, imc;

    printf("Digite sua altura:\n");
    scanf("%f", &altura);
    printf("Digite seu peso:\n");
    scanf("%f", &peso);

    imc = peso / pow(altura, 2);

    printf("seu imc e: %.2f", imc);

    getch();

    return 0;

}
