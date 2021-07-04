/*Programa que converte valores decimais em binarios, com 4 blocos de bytes com 8 bits cada.
 * João Bonifácio.
 * 3 de jul, 2021.
 */ 
#include <stdio.h>

#define TAM 33 //define o tamanho de 4 blocos de bytes.

int 
main(){
	int ip, binario[TAM], aux;//Variaveis.
	
	printf("\n\nDESCUBRA SEU IP TIPO V4 EM BINARIO\n\n");//Boas vindas
	printf("Digite seu IP/V4: ");//Digite seu IP/V4
	scanf("%d", &ip);//scanf lê o valor digitado
	
	if(ip < 0 ){//Boa pratica, se valor for negativa, informa erro 
		printf("\nValor Invalido\n\n");
		return 1;
	}
	for(aux = TAM -1; aux >= 0; aux--){//Primeiro laço for.
		binario[aux] = (ip % 2) == 0 ? 0 : 1;//Utilização do operador ternario para verdadeiro ou falso.
		ip = ip / 2;
	}
	printf("\n\t");
	for(aux = 1; aux < TAM; aux++){//Segundo laço for.
		printf("%d", binario[aux]);
		if((aux%8)==0)//Separa em 8 bits
			printf(" ");
		}
	printf("\n\n");
	return 0;
}
