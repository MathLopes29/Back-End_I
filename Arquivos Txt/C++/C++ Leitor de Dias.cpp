#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {


//VARIAVEIS //
int I,D,M,TA,TM,S;

//CODIGO//
std::cout<<"\n===========================================\t";
std::cout<<"\nVERIFICADOR DE ANO E MES ATUAL E NASCIMENTO\t";
std::cout<<"\n===========================================\t";
std::cout<<"\nInforme a sua idade: \t";
std::cin >> I;

std::cout<< "\nInforme o Mes:\t" ;
std::cin>>M;
if(M>12){
	std::cout<<"\nValor Incorreto\t";
	exit(0);}

std::cout<< "\nInforme o Dia: \t";
std::cin>>D;
if(D>31){
	std::cout<<"\nValor incorreto\t";
	exit(0);}

//SOMATORIA//
TA = 365*I;
TM = 30*M;
S=D+(TA+TM);

std::cout<<"\n==========================\t";
std::cout<<"  \nTOTAL DE DIAS NA TERRA\t  ";
std::cout<<"\n==========================\t";
std::cout<<" \nTotal de dia na terra: "<< S;
 
	
	return 0;
}
