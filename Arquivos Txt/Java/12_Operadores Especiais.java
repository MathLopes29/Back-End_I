/** 
* Aula 18 - Operadores Especiais
* Operadores de casos específicos
* @author Matheus Lopes
*/

/** OPERADORE DE ATRIBUIÇÃO

?: Operador Ternárrio
,  Separação de Expressões
() Chamada de Método
(cast) Coerção Unária

*/

import javax.swing.JOptionPane;
import java.util.Scanner;

public class AtribuirEsp {
	
	public static void main (String[] args){
		
		Scanner s = new Scanner (System.in);
		
		int idade = 6;
		String x = (idade >= 18) ? "Maior de Idade" : "Menor de Idade";
		System.out.println(x);
		
		String sexo = "M", pais = "Brasil";
	}
}
