/*
* Esse programa junta e reune todas as verificações possíveis de um Triângulo
* @author Matheus Lopes
*/

#include "iostream"
#include "math.h"
#include "cstdlib"

using namespace std;

int L1, L2, L3, P;
int A1, A2, A3;

void TelaLado(){
cout<<"========================================="<<endl;
cout<<"V E R R I F I C A D O R   D E   L A D O S"<<endl;
cout<<"========================================="<<endl;
}

void PerguntaLado(){
	for(int i=0; i<1; i++){
		cout<<"Primeiro lado: "<<endl;
	    cin>> L1;
		cout<<endl;
		
	    cout<<"Segundo lado: "<<endl;
	    cin>>L2;
		cout<<endl;
	    
		cout<<"Terceiro lado:"<<endl;
	    cin>>L3;
		cout<<endl;
	}
}

void VerificaLado(){ 
	if(L1+L2>>L3 && L2+L3>>L1 && L3+L1>>L2){
		cout<<"TRIANGULO EXISTE"<<endl;
	}else{
		if(L2+L3<L1){
			cout<<"TRIANGULO NAO EXISTE"<<endl;
		}else{
			if(L3+L1<L2){
				cout<<"TRIANGULO NAO EXISTE"<<endl;	
			}else{
				if(L1+L2<L3){
					cout<<"TRIANGULO NAO EXISTE"<<endl;	
				}else{
					if(L1+L2+L3 == 0){
						cout<<"TRIANGULO NAO EXISTE"<<endl;	
					}else{
						if(L1==L2 &&L2==L3){
							cout<<"EQUILATERO"<<endl;
						}else{
							if(L1!=L3 &&L2!=L3 &&L1!=L2){
								cout<<"ESCALENO"<<endl;
							}else{
								if(L1=L2 && L2!=L3){
									cout<<"ISSOCELES"<<endl;	
								}else{
									if(L1!=L2){
										cout<<"ISSOCELES"<<endl;
}}}}}}}}}}

void Tela(){

cout<<"============================================="<<endl;
cout<<"V E R R I F I C A D O R   D E   A N G U L O S"<<endl;
cout<<"============================================="<<endl;
}

int Pergunta(){
	for (int i=0; i<3;i++){
	cout<<"Digite o valor do 1 Angulo: ";
	cin>> A1;
	cout<<endl;
	cout<<"Digite o valor do 2 Angulo: ";
	cin>> A2;
	cout<<endl;
	cout<<"Digite o valor do 3 Angulo: ";
	cin>> A3;
	cout<<endl;
	return A1, A2, A3;
}}

void Verifica(){
	if (A1==90 && A2<90 && A3<90){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }else{
    	if(A2==90 && A3<90){
    	cout<<"TRIANGULO RETANGULO"<<endl;
		}else{
			if(A3==90 && A1<90){
				cout<<"TRIANGULO RETANGULO"<<endl;
			}else{
				if(A1+A2+A3!=180){
					cout<<"DADOS INCORRETOS INSIRA VALORES QUE SOMADOS RESULTEM EM 180 GRAUS"<<endl;
					return;
				}
			}
		}  
    }

    if(A1<90 &&A2<90 &&A3<90){
    	cout<<"TRIANGULO AGUTANGULO"<<endl;
    	system ("pause");
	}
 	
	if(A1>90 &&A2<90 &&A3<90){
		cout<<"TRIANGULO OBTUSANGULO"<<endl;
	}else{
		if(A2>90){
			cout<<"TRIANGULO OBTUSANGULO"<<endl;
		}else{
			if(A3>90){
			   	cout<<"TRIANGULO OBTUSANGULO"<<endl;
			}else{
				if(A1+A2+A3!=180){
					cout<<"DADOS INCORRETOS INSIRA VALORES QUE SOMADOS RESULTEM EM 180 GRAUS"<<endl;
				}
			}
		}
	}
}

int Perimetro(){
	P = (L1+L2+L3);
	cout<<"PERIMETRO: " <<P<<endl;
	return P;
}

int main(){
	
	TelaLado();
	PerguntaLado();
	VerificaLado();
	Perimetro();
	cout<<"..............."<<endl;	
	Tela();
	Pergunta();
	Verifica();
}
