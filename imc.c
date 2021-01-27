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

    printf("Seu I.M.C e: %.2f", imc);

    if (imc == 25.0) {
        printf("\nDeve tomar cuidado com seu peso!");
    }
    else {
        if (imc > 25.0){
                printf("\nCuidado voce esta acima do peso ideal!");
    }
    else {
        printf("\nParabens voce esta no peso ideal");
    }
    }
    getch();

    return 0;

}
