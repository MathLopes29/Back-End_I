#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int N1,N2,N3,N4;

	int MT1,MT2,MT;
	
	printf("\n=================1 BIMESTRE=================\t");
	printf("\nNOTA P1:\t");
	scanf("%d",&N1);
	printf("\nNOTA P2:\t");
	scanf("%d",&N2);
	
	if(N1>10 && N2>10){
		printf("\nDIGITE VALORES ABAIXOS DE 10\t");
		exit(0);
	}
	
	MT1 = (N1+N2)/2;
	printf("\nMedia aritmetica do 1 Bimestre: %d\t",MT1," \n");
	
	printf("\n=================2 BIMESTRE=================\t");
	printf("\nNOTA P1:\t");
	scanf("%d",&N3);
	printf("\nNOTA P2:\t");
	scanf("%d",&N4);
	
	if(N3>10 && N4>10){
		printf("\nDIGITE VALORES ABAIXOS DE 10\t");
		exit(0);
	}
	
	MT2 = (N3+N4)/2;
	printf("\nMedia aritmetica do 2 Bimestre: %d\t",MT2," \n");
	
	MT = MT1+MT2;
	printf("\n===================================\t");
	printf("\nMedia aritmetica total: %d\t",MT," \n");
	
	exit(0);
	return 0;
}
