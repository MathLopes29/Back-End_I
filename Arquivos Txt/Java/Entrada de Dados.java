/**
* Aula 011 - Entrada de Dados com Scanner
* Chamada : java.lang
* Scanner : java.util
* Documentação
* @author Matheus Lopes
*/

/**
* System.in === Input do Sistema
* Scanner ==== Trabalhar com a entrada e leitura do sistema
* s.nextLine (); - Para printar o resultado
* Integer idade = Integer.parseInt(s.nextLine());
*/

import java.util.Scanner;

public class Entrada {
	
	public static void main (String[] args){
		
		int Total, Ano, Messes;
		
		
		// CHAMADA DO SISTEMA
		// System.out.println(args[0]);
		
		// INTERAGINDO COM O USUARIO //
		Scanner s = new Scanner (System.in);     // Criou o Scanner //
		
		System.out.println("Qual o seu nome ?");  // Fez a pergunta //
		String nome = s.nextLine();				 // Usou s.nextLine(); //
		System.out.println("Bem vindo " + nome); // Printou na tela o conteúdo //
		
		System.out.println("Qual sua idade ?");  			
		Integer idade = Integer.parseInt(s.nextLine());	   // Usou s.nextLine(); - Porém com o convertor Integer.parseInt //
		System.out.println("Voce tem " + idade + " anos");
		
		System.out.println("Que Mes ?");  			
		Integer mes = Integer.parseInt(s.nextLine());	   
		System.out.println("Estamos no mes " + mes );
		
		System.out.println("Que dia e hoje ?");  			
		Integer dia = Integer.parseInt(s.nextLine());	   
		System.out.println("Hoje e dia " + dia );
		
		Messes = (mes = (mes * 30));
		Ano = (idade = (365 * idade));
		Total = (idade + mes + dia);
		
		System.out.println("Total de Dias " + Total);
		
	}
}
