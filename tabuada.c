#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c,tab;
    printf("Digite um numero entre 1 e 10:\n");
    scanf("%d", &n);
    for(c = 1; c <= 10; c++){ // enquanto c menor ou igual a 10
                              // soma mais 1 c
        tab = n*c;

      printf("\n%d x %2d = %3d", n,c,tab);
    }
    getch();
    return 0;
}
