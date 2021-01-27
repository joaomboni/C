#include <stdio.h>
#include <stdlib.h>

int main()
{

    float x1, x2, a, b, c, raiz;

    printf("Informe os 3 valores:\n");
    scanf("%f%f%f", &a, &b, &c);

    raiz = b*b - 4*a*c;
    x1 = (-b + sqrt(raiz)) / (2*a);
    x2 = (-b - sqrt(raiz)) / (2*a);

    if(raiz < 0){
        printf("\nA equacao nao possui raizes reais!");
    }
    else{
        printf("\nO valor de x1: %.2fn", x1);
        printf("\nO valor de x2: %.2fn", x2);
    }
    getch();
    return 0;
    }






