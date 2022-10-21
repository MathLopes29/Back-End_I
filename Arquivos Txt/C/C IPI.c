#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char C1[5],C2[5];
	int Q1,Q2,V1,V2;
	int Tg;
	int Ip;
	
	printf("\n=======================================\t");
	printf("\n        I P I  D E  C A R R O S        \t");
	printf("\n=======================================\t");
	printf("\nInforme o Codigo: \t");
	scanf("%s",C1);
	printf("\nDigite a Quantidade de pecas vendidas: \t");
	scanf("%d",&Q1);
	printf("\nDigite o Valor Unitario da peca 1:\t");
	scanf("%d",&V1);


	printf("\n=======================================\t");
	printf("\nInforme o segundo codigo: \t");
	scanf("%s",C2);
	printf("\nDigite a Quantidade de pecas vendidas: \t");
	scanf("%d",&Q2);
	printf("\nDigite o Valor Unitario da peca 2:\t");
	scanf("%d",&V2);

	
	Tg=(Q1*V1)+(Q2*V2);
	printf("\nTotal Geral e de: %d\t",Tg);

	Ip=(Q1*V1+Q2*V2)*(0.20 /100 + 1);
	printf("\nValor do IPI: %d\t",Ip);
	return 0;
}
