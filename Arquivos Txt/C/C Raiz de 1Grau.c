#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float A, B, X=0;
	
	
	printf("\n======================\t");
	printf("\nRAIZ DE PRIMEIRO GRAU \t");
	printf("\n======================\t");
	
	printf("\nPrimeiro valor: \t");
	scanf("%d", &A);
	
	printf("\nO Segundo valor: \t");
	scanf("%d", &B);
	
	X=B/A;
	printf("\nA Raiz da Equacao Digitada foi:%f\t ", X);
	
	return 0;
}
