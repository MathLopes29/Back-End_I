/**
* Reajuste Salárial de 10%
* @author Matheus Lopes
*/



import javax.swing.JOptionPane;
import java.util.Scanner;

public class Reajuste{
	
	public static void main (String[] args){
		
		float Reajuste_Sal = 0 , Salario;
		
		Salario = Integer.parseInt(JOptionPane.showInputDialog("\nINFORME SEU SALARIO "));
		Reajuste_Sal =  (float) (Salario + (Salario * 0.10));
		
		JOptionPane.showMessageDialog(null, "O SALARIO COM REAJUSTE DE 10% FICOU: R$" + Reajuste_Sal);
	}
}
