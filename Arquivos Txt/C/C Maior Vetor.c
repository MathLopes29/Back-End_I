/*6 - Fazer um programa em "C" que lê 10 valores e imprime o maior e o menor valores lidos. */
#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int vetor[9], maiorValor, menorValor;
	
	for(int i = 0; i <= 9; i ++){
		printf("\nDigite o %d valor: ", i);
		scanf("%d", &vetor[i]);
	}
	
	maiorValor = vetor[0];
	
	for(int j = 0; j <= 9; j++){
		if(vetor[j] > maiorValor){
			maiorValor = vetor[j];
		}
	}
	
	menorValor = vetor[0];
	
	for(int k = 0; k <= 9; k++){
		if(vetor[k] < menorValor){
			menorValor = vetor[k];
		}
	}
	
	printf("\nO maior valor do vetor é: %d", maiorValor);
	printf("\nO menor valor do vetor é: %d", menorValor);	
}
