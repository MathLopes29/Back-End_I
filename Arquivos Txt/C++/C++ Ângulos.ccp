#include "iostream"
#include "math.h"
#include "cstdlib"

using namespace std;

int A1, A2, A3;

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

int main() {
	
	Tela();
	Pergunta();
	Verifica();
	return 0;
}
