/*2 - Fazer um programa que solicita um número decimal e imprime o
correspondente em hexa e octal.
*/

#include <stdio.h>
#include <locale.h> 

/*Hexa - ROTINA*/
void Hexadecimal(int num){
	
	 int  i, quociente; 	 
 	 int resto[i]; 	 

 	 quociente = num / 16;
 	 resto[i] = num % 16;

 	 while(quociente >= 16){		 	     	   
	 	  i++;				   
 	      resto[i] = quociente % 16; 
 	      quociente  = quociente / 16; 	      		  		    		        	      
 	 }
 	 
 	 if(quociente < 16){	   
	    switch(quociente){  	
		   case 10: (char)quociente; break;		   
		   case 11: (char)quociente; break;
		   case 12: (char)quociente; break;
		   case 13: (char)quociente; break;
		   case 14: (char)quociente; break;
		   case 15: (char)quociente; break; 			   	  			   
		}
					         
    	i++;          		  
		resto[i] = quociente;					 
	 }	 
	 	 
 	 printf ("\nConversão para Hexadecimal : \t ",num);
 	 
 	for( i=0 ;i >= 0; i--)
 	 	printf ("%x", resto[i]);	
} 
              	

/* Octal - ROTINA*/
void Octal(int num){
	
    int i = 1, a; 
    int octal = 0;

    if(num <= 7) {
        octal = num;
    }else {
        while(num >= 8) {
            a = num % 8;
            num = num / 8;
            i *= 10;
            octal = octal + a * i;
        }
        num = num % 8;
        octal = octal + num * i; 
    }
    printf("\nConversão para Octal: %d", octal);
}

//Interface do programa //
main(){
	
	setlocale(LC_ALL, "portuguese");
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	Hexadecimal(num);
	Octal(num);
	 
	return 0;
}
