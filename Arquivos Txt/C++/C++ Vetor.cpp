#include "iostream"
#include "math.h"
#include "cstdlib"

int vetorInteiro[3];
int tamanho;

using namespace std;

int gerarVetor() {

tamanho  = sizeof(vetorInteiro) / sizeof(vetorInteiro[0]);
int valor;
    for(int i = 0; i < tamanho; i++){       
		cout<<"Entre com o valor do vetor: ";
        cin>>valor;
        cout<<endl;
        vetorInteiro[i] = valor;
	}
}

      
int mostrarVetor(){    
    int i;
    tamanho  = sizeof(vetorInteiro) / sizeof(vetorInteiro[0]);

    for (i = 0; i < tamanho ; i++){
        cout<<"Valor: " <<vetorInteiro[i]<<endl;
    }    
}

int main(){      
       gerarVetor();
       mostrarVetor();
       cout<<endl;
       system("pause");
}
 

  

