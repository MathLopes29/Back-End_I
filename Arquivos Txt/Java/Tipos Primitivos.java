/**
* Aula 007 - Tipos Primitivos
* Conceitos de Variaveis e tipos primitivos
* @author Matheus Lopes
*/

public class VariaveisPrimitivos{
	
	public static void main (String[] args){
		
		int idade = 31;
		double preco = 12.76;
		char sexoMasc = 'M'; // Unicode
        char sexoFem = 'F';
		boolean casado = true;
		
	   // MAXIMO DE ARMAZENAMENTO //
		
		byte b = 127; //100
		short s = 32_768; // 32 mil
		int i = 2000000000; // 2 bilhões
		long l = 9000000000000000000; // 9 quintilhões
		double d = 1.7976931... ; // IEEE754 - Padrão tratada pela CPU
		float f = 123F;
		
        
		
		byte bb = 0b01010101;// 8 bits / 1 byit
		short ss = 0b0101010101010101; // 16 bits / 2 bytes
		int ii = 0b01010101010101010101010101010101; // 32 bits / 4 bytes
		
		
		System.out.println(ii);
		
		i = s; //Cast Implícito
		System.out.println(s);
		System.out.println(i);
		
		i = (int) l; //Cast Explícito
		System.out.println(l);
		System.out.println(i);
		
	}
}

/**
*	TIPOS PRIMITIVOS
*
* [int   byte   short 
* long] [float  double]
* {char}  {void}   {boolean}
*
* OBS = 0b___________? -  seis valores 01
*/
