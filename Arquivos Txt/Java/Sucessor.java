/** 
* @author Matheus Lopes
*/

import java.util.Scanner;
import javax.swing.JOptionPane;

public class Sucessor {
	
	public static void main (String[] args){
		
		int ANTECESSOR, SUCESSOR, N;
		
		N = Integer.parseInt(JOptionPane.showInputDialog("\nInforme um numero"));
		
		ANTECESSOR = (N - 1);
		SUCESSOR = (N + 1);
		
		JOptionPane.showMessageDialog(null, "\nAntecessor = " + ANTECESSOR);
		JOptionPane.showMessageDialog(null, "\nSucessor = " + SUCESSOR);
	}
}
