#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
    int L1, L2, L3, P;
   
//COMPRIMENTO DE LADOS //
printf("\n=========================================\t");
printf("\nV E R R I F I C A D O R   D E   L A D O S\t");
printf("\n=========================================\t");
    printf("\nPrimeiro lado:\t");
    scanf("%d", &L1);

    printf("\nSegundo lado:\t");
    scanf("%d", &L2);

    printf("\nTerceiro lado:\t");
    scanf("%d", &L3);
    
    
// Condição de Existência //
	if(L1+L2>>L3 && L2+L3>>L1 && L3+L1>>L2){
		printf("\nTRIANGULO EXISTE\t");
	}else{
		if(L2+L3<L1){
			printf("\nTRIANGULO NAO EXISTE\t");
		}else{
			if(L3+L1<L2){
				printf("\nTRIANGULO NAO EXISTE\t");	
			}else{
				if(L1+L2<L3){
					printf("\nTRIANGULO NAO EXISTE\t");	
				}else{
					if(L1+L2+L3 == 0){
						printf("\nTRIANGULO NAO EXISTE\t");	
					}else{
						if(L1==L2 &&L2==L3){
							printf("\nEQUILATERO\t");
						}else{
							if(L1!=L3 &&L2!=L3 &&L1!=L2){
								printf("\nESCALENO\t");
							}else{
								if(L1=L2 && L2!=L3){
									printf("\nISSOCELES\t");	
								}else{
									if(L1!=L2){
										printf("\nISSOCELES\t");
									}
								}
							}
						}
					}
				}
			}	
		}
	}

// PERIMETRO //
	P= (L1+L2+L3);
	printf("\nPERIMETRO: %d\t",P);

	
	
	return 0;
}
