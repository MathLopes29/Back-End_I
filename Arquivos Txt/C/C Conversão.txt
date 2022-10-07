/*1 - Fazer um programa que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.
*/

#include<stdio.h>
#include <locale.h> 

main(){

setlocale(LC_ALL,"portuguese");

float m,dc,c,mm;

printf("\nInforme o Valor em Metros\t");
scanf("\n%f",&m);

dc = m*10;
c = m*100;
mm = m*1000;


printf("\nO valor em Decimetros e:\t%f",dc);
printf("\nO valor em Centimetros e:\t%f",c);
printf("\nO valor em Milimetros e:\t%f",mm);

}
