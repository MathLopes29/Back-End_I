/**
* Exercício ... 
* Cálculo de Salário Minímo usando Média, Salário e a QTD - Quantidade - que corresponde seu salário!
* @author Matheus Lopes
*/


import java.util.Scanner;
import javax.swing.JOptionPane;

public class SalMinimo {
	
	public static void main (String[] args){
		
		float SMEDIA = 789, QTD_SM = 0, SALARIO;
		
		SALARIO = Integer.parseInt(JOptionPane.showInputDialog("\nInforme seu salario "));
		
		QTD_SM = (SALARIO / SMEDIA);
		JOptionPane.showMessageDialog(null,"A QUANTIDADE DE SALARIOS MINIMOS QUE VC ESTA GANHANDO : " +String.format ("%.1f", QTD_SM));
	}
}
