#include <stdio.h>
#include <stdlib.h>

/* Codifique uma instrução para exibir valores lógicos como
true e false. Para o valor 0 deve aparecer false e para qualquer outro, true.*/
int main()
{
    int num;
    printf("Digite um numero:\n");
    scanf("\n%d", &num);
    if (num == 0){
        printf("False");
    }
    else{
        printf("True");
    }
    return 0;
}
