#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("Informe os tres lados do triangulo:\n");
    scanf("%f%f%f", &a, &b, &c);
    if(a<b+c && b<a+c && c<a+b){
        printf("\nE um Triangulo");
    }
    if (a == b && b == c){
        printf("\nEquilatero!");
    }
    else{
        if(a == b || a == c || b == c){
            printf("\nIsosceles");
        }

    else{
        printf("\nEscaleno");
    }
       }

    getch();
    return 0;
}
