#include "iostream"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char *argv[]) {
	char C1[5],C2[5];
	int Q1,Q2,V1,V2;
	int Tg;
	int Ip;
	
	cout<<"\n=======================================\t";
	cout<<"\n        I P I  D E  C A R R O S        \t";
	cout<<"\n=======================================\t";
	cout<<"\nInforme o Codigo: \t";
	cin>> C1;
	cout<<"\nDigite a Quantidade de pecas vendidas: \t";
	cin>> Q1;
	cout<<"\nDigite o Valor Unitario da peca 1:\t";
	cin>> V1;

	cout<<"\n=======================================\t";
	cout<<"\nInforme o segundo codigo: \t";
	cin>> C2;
	cout<<"\nDigite a Quantidade de pecas vendidas: \t";
	cin>> Q2;
	cout<<"\nDigite o Valor Unitario da peca 2:\t";
	cin>> V2;

	
	Tg=(Q1*V1)+(Q2*V2);
	cout<<"\nTotal Geral e de: "<<Tg;

	Ip=(Q1*V1+Q2*V2)*(0.20 /100 + 1);
	cout<<"\nValor do IPI: "<<Ip;
	

	return 0;
}
