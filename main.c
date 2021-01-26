#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fat, n;
    printf("Insira o valor que deseja calcular o FATORIAL:\n");
    scanf("%d", &n);
    for(fat = 1;n > 1; n--)
        {
          fat = fat * n;
        }

    printf("\nO fatorial e:%d", fat);
    return 0;
}
