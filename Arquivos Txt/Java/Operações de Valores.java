/** 
* Aula 15 - Operações de Valores
* Comparação de Valores
* @author Matheus Lopes
*/

import javax.swing.JOptionPane;
import java.util.Scanner;

public class Compare{
	
	public static void main (String[] args){
		
		Scanner s = new Scanner (System.in);
		
		int x = 6;
		System.out.println(x == 6);
		
		// boolean x == 6; //
		
		// System.out.println (x > 8);
		// System.out.println (x < 10);
		// System.out.println (x != 9);
		// System.out.println (x >= 5);
		// System.out.println (x =< 6);
		// System.out.println (x instanceof Integer); - Compara Tipos de Dados / valido para Obj.
		
		System.out.println ("Olá" instanceof String);
		
	}
}
