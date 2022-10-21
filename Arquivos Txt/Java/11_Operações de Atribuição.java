/** 
* Aula 17 - Operações de Atribuição
* Atribuição de Valores
* @author Matheus Lopes
*/

import javax.swing.JOptionPane;
import java.util.Scanner;

public class Atribuir {
	
	public static void main (String[] args){
		
		Scanner s = new Scanner (System.in);
		
		int x = 6;
		int y = 9;
		int z = 15;
		int w = 1;
		
		//x = x + 3
		x += 3;
		
		//y = y * 5
		y *= 5;
		
		//z = z / 10
		z /= 10;
		
		//w = w % 2
		w %= 2;
		
		System.out.println("Soma = " + x);
		System.out.println("Multiplicação = " + y);
		System.out.println("Divisão = " + z);
		System.out.println("Modulo = " + w);
		
		/** OPERADORE DE ATRIBUIÇÃO
		
		*	+= Soma
		*	-= Subtração
		*	*= Multiplicação
		*	/= Divisão
		*	%= Módulo
		
		*/
		
	}
}
