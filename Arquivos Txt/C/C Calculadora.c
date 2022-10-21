#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int A, B, X;
	
	printf("\n======================\t");
	printf("\nC A L C U L A D O R A \t");
	printf("\n======================\t");
	
	printf("\n Primeiro valor: \t");
	scanf("%d", &A);
	
	printf("\nO Segundo valor: \t");
	scanf("%d", &B);
	
	
	X = A + B;
	printf("\nSoma:%d\t",X);
	
	X = A - B;
	printf("\nSubtracao: %d\t",X);
	
	X = A / B;
	printf("\nDivisao: %d\t",X);
	
	X = A * B;
	printf("\nMultiplicacao: %d\t",X);

	return 0;
}
