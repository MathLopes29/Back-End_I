/**
* Aula 012 - JOptionPane
* Chamada : java.lang
* Scanner : java.util
* Documentação
* @author Matheus Lopes
*/


import java.util.Scanner;
import javax.swing.JOptionPane;

public class InterFac  {
	
	public static void main (String[] args){
		
	String nome = JOptionPane.showInputDialog("Qual o seu nome?");
	
	// System.out.println(nome); //
	JOptionPane.showMessageDialog(null, "Seu nome e " + nome);
	
	}
}
