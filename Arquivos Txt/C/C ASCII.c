/*4 - Fazer um programa que imprime a tabela ASCII 
(código decimal, código hexa, caracter) para os códigos de 0 a 127.*/

#include<stdlib.h>
#include<stdio.h>

int main(void){
    int a = 0;

    printf("\nIMPRIMINDO TABELA\t");

    //%i imprime Decimal, %o imprime Octal, %x imprime Hexadecimal, %c imprime caractere Char//
    
    for ( a = 1; a <= 127; a++ ){
        printf("\nDecimal: %i\tOctal: %o\tHexadecimal: %x\t\t", a, a, a);
        if (a > 32)
            printf("Caractere: %c",a);
        printf("\n");
    }
    
    system("pause");
    return 0;
}
