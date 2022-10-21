#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//VARIÁVEIS //
int NASC, ANO_ATUAL;
int MES_NASC, MES_ATUAL;

int DIF_MES, DIF_ANO;

int ANO_DIA;
int MES_DIA;
int DIA_DIA;
int TOTAL;

printf("\n================================\t");
printf("\n====  ANO DE NASCIMENTO  ======\t");
printf("\n================================\t");

printf("\nDigite em que ano voce nasceu:\t ");
scanf("%d",&NASC);
	 	 
printf("\nEm que ano estamos atualmente:\t ");
scanf("%d",&ANO_ATUAL);
	 
if(NASC>ANO_ATUAL){
	printf("Digite valores validos");
	exit(0);}
 
if(ANO_ATUAL==0 && NASC==0){
	printf("\nDados Incorretos\t");
	exit(0);}	

printf("\n==========================\t");
printf("\n=== MES DE NASCIMENTO ====\t");
printf("\n==========================\t");
	
printf("\n Em qual mes voce nasceu: \t");
scanf("%d",&MES_NASC);
printf("\nEm qual mes estamos hoje: \t");
scanf("%d",&MES_ATUAL);
 
if(MES_ATUAL==0 && MES_NASC ==0){
 	printf("\nDados Incorretos\t");
	exit(0);}

if(MES_ATUAL>12 && MES_NASC>12){
	printf("\nValores invalidos\t");
	exit(0);}

printf("\n==============================\t");
printf("\n====== SUBTRACAO DE ANO ======\t");
printf("\n==============================\t");

DIF_MES = (MES_ATUAL - MES_NASC);
printf("\nDiferenca de mes: %d messes\t",DIF_MES);

DIF_ANO = (ANO_ATUAL - NASC);
printf("\nDiferenca de ano: %d anos\t",DIF_ANO);

if(MES_ATUAL==0 && MES_NASC==0){
	printf("\nDados Incorretos\t");
	exit(0);}else{
		if(MES_NASC>MES_ATUAL){
			MES_NASC*-1;}}
	 
//CONTAGEM DE DIAS//	 
printf("\n");
printf("\n============================\t");
printf("\n== TOTAL DE DIAS NA TERRA ==\t");
printf("\n============================\t");	
 
ANO_DIA = DIF_ANO * 365;
printf("\nVoce viveu: %d dias\t",ANO_DIA);

MES_DIA = DIF_MES * 30;
printf("\nVoce viveu: %d dias\t",MES_DIA);

printf("\nHoje e dia: \t");
scanf("%d",&DIA_DIA);

if(DIA_DIA>31){
	printf("Digite valores validos");
	exit(0);}

TOTAL = (ANO_DIA + MES_DIA + DIA_DIA);
printf("\n");
printf("\nVoce atualmente esta no dia: %d\t",TOTAL);

	exit(0);
	return 0;
}
