#include "iostream"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int A, B;
	
	cout<<"\nDigite um valor:\t";
	cin>>A;
	
	cout<<"\nDigite outro valor:\t";
	cin>>B;
	
	if (A>=B){
		cout<<"\nA Maior e Igual que B\t";
	}else{
		cout<<"\nB Maior e Igual que A\t";
	}
	
	if (A==B){
		cout<<"\nSao iguais\t";
	}else{
		cout<<"\nNao sao iguais\t";
	}
	return 0;
}
