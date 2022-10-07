/*5 - Fazer um programa em "C" que lê o preço de um produto e inflaciona esse preço em 10% 
se ele for menor que 100 e em 20% se ele for maior ou igual a 100.*/

#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");

int valor;

printf("\nDigite o Valor do Produto\t");
scanf("\n%i", &valor);

if(valor <= 100){
	valor *= 1.2;
printf("\nAumento do preço em 10 porcento =  \t%i", valor);
} else {
	valor *= 1.1;
	printf("\nAumento do preço em 20 porcento =  \t%i", valor);
}

return 0;
}
