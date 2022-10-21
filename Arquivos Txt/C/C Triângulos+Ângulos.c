#include <stdio.h>
#include <stdlib.h>
//VARIAVEIS DE LADO 
int main(){
    int L1, L2, L3;
	int A1, A2, A3;

//Comprimento de Lados //
printf("\n=========================================\t");
printf("\nV E R R I F I C A D O R   D E   L A D O S\t");
printf("\n=========================================\t");
    printf("\nPrimeiro lado:\t");
    scanf("%d", &L1);

    printf("\nSegundo lado:\t");
    scanf("%d", &L2);

    printf("\nTerceiro lado:\t");
    scanf("%d", &L3);

// Condição de Existência e classificação //
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
	
	//Angulos//
printf("\n=============================================\t");
printf("\nV E R R I F I C A D O R   D E   A N G U L O S\t");
printf("\n=============================================\t");

	printf("\nDigite o primeiro angulo: \t");
	scanf("%d", &A1);
	
	printf("\nDigite o segundo angulo: \t");
	scanf("%d", &A2);
	
	printf("\nDigite o terceiro angulo: \t");
	scanf("%d", &A3);
	
//RETANGULO//
	if (A1==90 && A2<90 && A3<90){
        printf("\nTRIANGULO RETANGULO\t");
    }else{
    	if(A2==90 && A3<90){
    	printf("\nTRIANGULO RETANGULO\t");	
		}else{
			if(A3==90 && A1<90){
				printf("\nTRIANGULO RETANGULO\t");
			}else{
				if(A1+A2+A3!=180){
					printf("\nDADOS INCORRETOS INSIRA VALORES QUE SOMADOS RESULTEM EM 180 GRAUS\t");
				}
			}
		}  
    }
  
//MENOR QUE 90
    if(A1<90 &&A2<90 &&A3<90){
    	printf("\nTRIANGULO AGUTANGULO\t");
	}
 	
// MAIOR QUE 90//
	if(A1>90 &&A2<90 &&A3<90){
		printf("\nTRIANGULO OBTUSANGULO\t");
	}else{
		if(A2>90){
			printf("\nTRIANGULO OBTUSANGULO\t");
		}else{
			if(A3>90){
			   	printf("\nTRIANGULO OBTUSANGULO\t");
			}else{
				if(A1+A2+A3!=180){
					printf("\nDADOS INCORRETOS INSIRA VALORES QUE SOMADOS RESULTEM EM 180 GRAUS\t");
				}
			}
		}
	}
	
	return 0;
}
