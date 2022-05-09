// Ordenar o vetor - com funções
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 25
#define MI 10
#define RG 100

//Prototipos
void preencherVetor(int *p, int t, int ini, int q);
void ordenarVetor(int *p, int t);
void imprimirVetor(int *p, int t);

int main(){
    int v[TAM];
    
    // Entrada de dados
    preencherVetor(v, TAM, MI, RG);
    puts("Vetor antes da ordenação: ");
    imprimirVetor(v, TAM);

    // Processamento 
    ordenarVetor(v, TAM);

    // Saída
    puts("Vetor ordenado: ");
    imprimirVetor(v, TAM);
    
    return 0;
}

void preencherVetor(int *p, int t, int ini, int q){
    srand(time(NULL));
    for (int k=0; k<t; k++){
        *(p + k) = ini + rand() % q;
    }
}

void ordenarVetor(int *p, int t){
    int a;
    for (int k=0; k<t-1; k++){
        for (int j=k+1; j<t; j++){
            if (*(p+k) > *(p+j)){
                a = *(p+k);
                *(p+k) = *(p+j);
                *(p+j) = a;
            }
        }
    }
}

void imprimirVetor(int *p, int t){
    for (int k=0; k<t; k++){
        printf("[%p] : %d\n",p+k,*(p + k));
    }
}

