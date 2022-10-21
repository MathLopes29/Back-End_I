#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int N1= 8;
	int N2= 9;
	int N3= 7;
	int N4= 4;
	int N5= 5;
	int N6= 6;
	int M1,M2,MT;
	
	printf("\n====================================\t");
	printf("\nNota 1: %d\t",N1);
	printf("\nNota 2: %d\t",N2);
	printf("\nNota 3: %d\t",N3);
	
	M1 = (N1+N2+N3)/3;
	printf("\nMedia aritmetica: %d\t",M1," \n");
	
	printf("\n===================================\t");
	printf("\nNota 4: %d\t",N4);
	printf("\nNota 5: %d\t",N5);
	printf("\nNota 6: %d\t",N6);
	
	M2 = (N4+N5+N6)/3;
	printf("\nMedia aritmetica: %d\t",M2," \n");
	
	MT = M1+M2;
	printf("\n===================================\t");
	printf("\nMedia aritmetica total: %d\t",MT," \n");
	return 0;
}
