#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Dado um número real qualquer, informe seu valor absoluto */

int main()
{
    int real, abs;
    printf("Escolha um numero real: ");
    scanf("%d", &real);
    abs = sqrt(pow(real, 2));
    printf("\nO valor absoluto e: %d", abs);

    getch();

    return 0;
}
