#include <stdio.h>
#include <stdlib.h>


/* Para que três números representem os lados de um triângulo é necessário que cada um deles seja menor que a soma dos outros dois.
• Um triângulo é equilátero se tem os três lados iguais, isósceles se tem apenas dois lados iguais e escaleno se tem todos os lados distintos. */

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
