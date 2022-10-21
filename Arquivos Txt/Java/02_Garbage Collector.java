/**
* Aula 008 - Introdução ao Garbage Collector
* Conceitos de Memória
* Variáveis de Referência
* Garbage Collector 
* @author Matheus Lopes 
*/

public class GarbageCollector{

	public static void main (String[] args){
		
	// Variável Primitiva // - Nesse caso X contém o seu valor 7 (01000111) //
	int x = 7;
	// Agora X é igual à 9 - O dado armazenado na memória é alterado //
	x = 9;
	
	
	// Variável de Referência - Orientado aos objetos - Controle Remoto na Virtual Machine //
	String y = "XTI";
	// Valor Linkado e Substituido e Armazenado na Memória para ser coletado pelo Garbage Collector //
	y = "xti.com.br";
	// Limpar Referências //
	y = null;
	}
	
	/**
	*	Resumo da aula - Diferências entre Variável Pimitiva e de Referência
	*	Observa os comentários e manipule os dados do Garbage Collector
	*/

}
