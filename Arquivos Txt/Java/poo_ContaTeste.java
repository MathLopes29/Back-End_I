/**
 * Técnicas de Programação - 24/10/2022
 * @author Matheus Lopes
 * Programa Conta Teste
 */

package poo.techprog10;

public class ContaCorrente {
    public static void main(String[] args) {
        
    Conta Conta_Principal = new Conta();
		Conta_Principal.Cliente = "Lucas de Andrade";
		Conta_Principal.Saldo = 12_924.00 ;
		System.out.println("----- EXIBINDO SALDO DO CLIENTE -----");
    Conta_Principal.ExibirSaldo();
    System.out.println("----- EXIBINDO SALDO DO CLIENTE APÓS TAXA DE 5% -----");
    Conta_Principal.Atualiza(0.05);
    Conta_Principal.ExibirSaldo();
		
		Conta Conta_Destino = new Conta();
		Conta_Destino.Cliente = "Junior";
    System.out.println("----- EXIBINDO SALDO DO CLIENTE -----");
		Conta_Destino.Saldo = 5_872.81;
		Conta_Destino.ExibirSaldo();
    System.out.println("----- EXIBINDO SALDO DO CLIENTE APÓS TAXA DE 15% -----");
		Conta_Principal.Atualiza(0.15);
    Conta_Principal.ExibirSaldo();
                         
    System.out.println("----- EXIBINDO SALDO DO CLIENTE APÓS TRANSFERÊNCIA -----");
		Conta_Principal.Transferencia(Conta_Destino, 890.00);
		Conta_Principal.ExibirSaldo();
		Conta_Destino.ExibirSaldo();
                
		
		/*
		conta.Sacar(1000);
		conta.ExibirSaldo();
		conta.Depositar(2000);
		conta.ExibirSaldo();
		*/
      
    }
}
