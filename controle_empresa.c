#include <stdio.h>
#include <stdlib.h>
/*a Uma empresa determinou um reajuste salarial de 5% a todos
os seus funcionários. Além disto, concedeu um abono de R$ 100,00 para aqueles que recebem até R$ 750,00. Dado o valor do salário de um funcionário,
informar para quanto ele será reajustado.*/

void main()
{
    float salario, salario1, salario2, salabono;
    printf("Informe seu salario:\n");
    scanf("%f", &salario);
    salario1 = salario * 0.05;
    salario2 = salario + salario1;
    printf("\nSeu novo salario e: %.2f", salario2);
    printf("\nAperte < ENTER > para seguir no app:");
    getch();
    if (salario2 <=750.00){
        salabono = salario2 + 100.00;
        printf("\nVoce recebeu um abono de 100.00, PARABENS: %.2f", salabono);
    }
    else {
        printf("\nSeu novo salario e: %.2f", salario2);
    }
    getch();
    return 0;
}
