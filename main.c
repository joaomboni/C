#include <stdio.h>
#include <stdlib.h>

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
