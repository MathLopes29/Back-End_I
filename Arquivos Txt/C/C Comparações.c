#inclue <stdio.h>
#inclue <stdlib.h>

int main {
	
	int A, B;
	
	printf("\nDigite um valor:\t");
	scanf("%d", &A);
	
	printf("\nDigite outro valor:\t");
	scanf("%d", &B);
	
	if (A>=B){
		printf("\nA Maior e Igual que B\t");
	}else{
		printf("\nB Maior e Igual que A\t");
	}
	
	if (A=B){
		printf("\nSao iguais\t");
	}else{
		printf("\nNao sao iguais\t");
	}
	return 0;
}
