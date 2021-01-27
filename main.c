#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    char s[] = "ANO BISSEXTO";
    char s2[] = "NAO E BISSEXTO";
    printf("Digite um ano para descobrir se ele e um ano BISSEXTO:\n");
    scanf("%d", &ano);
    if(!(ano%4) && ano%100 || !(ano%400)){
        printf("%20.12s!!\n", s);
    }
    else{
        printf("%20.17s!!\n", s2);
    }
    getch();
    return 0;
}
