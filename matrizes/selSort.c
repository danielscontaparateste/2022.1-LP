#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 300
#define QTD 100

void imprimirVetor(int x[], int t);

int main(){
    // int v[TAM] = {2, 1, 4, 6, 0}; 
    int v[TAM], aux; 

    srand(time(NULL));

    //Entrada
    for (int k=0; k<TAM; k++){
        v[k] = rand() % QTD;
    }

    puts("Vetor não ordenado");
    imprimirVetor(v, TAM);

    // Processamento
    for(int k=0; k<TAM-1; k++){
        for(int j=k+1; j<TAM; j++){
            if (v[k]>v[j]){
                aux = v[k];
                v[k] = v[j];
                v[j] = aux;
            }
        }
    }
    
    // Saída
    puts("Vetor ordenado");
    imprimirVetor(v, TAM);
    
    return 0;
}

void imprimirVetor(int x[], int t){
    for (int k=0; k<t; k++){
        printf("%d ",x[k]);
    }
    printf("\n");
}