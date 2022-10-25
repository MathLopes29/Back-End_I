/**
* @author Matheus Lopes
* Técnicas de Programação - 24/10/2022
* Programa Conta - Metódos
*/

package poo.techprog10;

public class Conta {
  String Cliente;
	double Saldo;
	
	void ExibirSaldo() {
		System.out.println(Cliente +" seu saldo é "+ Saldo);
                System.out.println("\n");
	}
	
	void Sacar(double valor) {
                // Saldo -= valor;
		Saldo = Saldo - valor;
	}
	
	void Depositar(double valor) {
            // Saldo += valor;
            Saldo = Saldo + valor;
	}
	
	void Transferencia(Conta Conta_Destino, double valor) {
		this.Sacar(valor);
		Conta_Destino.Depositar(valor);
	} 
        
        void Atualiza(double taxa) {
            this.Saldo += this.Saldo * taxa * 2;
        }
}

