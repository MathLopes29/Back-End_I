#include "iostream"
#include "math.h"
#include "cstdlib"

using namespace std;	
int main(){

	string User;
	int Salario,Qtde;
	
	cout<<"==================================="<<endl;
	cout<<"Digite seu nome: "<<endl;
	cin>>User;
	
	cout<<"Digite quantos salarios vc possui: ";
	cin>>Qtde;
	cout<<endl;
	
	cout<<"=============================================================="<<endl;
	cout<<"     S A L A R I O  M I N I M O    "<<endl;
	cout<<"=============================================================="<<endl;
	cout<<endl;
	
	Salario = Qtde*788;
	cout<<"Seu nome e "<< User <<" e seu Salario Minimo e de "<< Salario <<" Reais"<<endl;
	
	exit (0);
	return 0;
}
