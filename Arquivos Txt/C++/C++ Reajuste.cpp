#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
		
int V, R;

	std::cout<<"\nDigite um valor: \t";
	std::cin>>V;
	
	R=(V*0.25)+V;
	cout<<"\n======================\t";
	cout<<"  \n R E A J U S T E \t   ";
	cout<<"\n======================\t";
	cout<<"\nReajuste igual a: \t"<<R;
	
	exit(0);
	return 0;
}
