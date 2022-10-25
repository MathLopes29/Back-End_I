#include "iostream"
#include "math.h"
#include "cstdlib"

using namespace std;

float A, B, X=0;

int main(){

	cout<<"======================"<<endl;
	cout<<"RAIZ DE PRIMEIRO GRAU"<<endl;
	cout<<"======================"<<endl;
	
	cout<<"Primeiro valor: ";
	cin>>A;
	cout<<endl;
	
	cout<<"O Segundo valor: ";
	cin>>B;
	cout<<endl;
	
	
	cout<<"Equacao:Ax+B"<<endl;
	
	X=B/A;
	cout<<"A Raiz da Equacao Digitada foi: "<< X <<endl;

	
return 0;
}	

