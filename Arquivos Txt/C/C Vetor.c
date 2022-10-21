#include <stdio.h>
#include <stdlib.h>

int vetorInteiro[3];
int tamanho;

int main(int argc, char *argv[])
{      
       gerarVetor();
       mostrarVetor();
       printf("\n\n");
       system("pause");
}


int gerarVetor() {
    
       tamanho  = sizeof(vetorInteiro) / sizeof(vetorInteiro[0]);
       int valor;
       int i;
       for(i = 0; i < tamanho; i++){
               printf("\nEntre com o valor do vetor: ");
               scanf("%d", &valor);
               vetorInteiro[i] = valor;
       }
}
 
      
int mostrarVetor()
{    
    int i;
    tamanho  = sizeof(vetorInteiro) / sizeof(vetorInteiro[0]);

    for (i = 0; i < tamanho ; i++)
    {
        printf("\nValor: %d", vetorInteiro[i]);
    }    
       
}

  

