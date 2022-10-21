#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int A1, A2, A3;

//ANGULOS//
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
