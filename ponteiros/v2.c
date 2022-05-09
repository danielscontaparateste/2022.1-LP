// Ordenar o vetor

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MI 10
#define RG 100

int main(){
    int v[TAM];
    int *pv;

    srand(time(NULL));

    pv = v; //pv = &v[0];

    // Entrada de dados
    for (int k=0; k<TAM; k++){
        *(v + k) = MI + rand() % RG;
    }

    // Processamento 
    int t;
    for (int k=0; k<TAM-1; k++){
        for (int j=k+1; j<TAM; j++){
            if (*(pv+k) > *(pv+j)){
                t = *(pv+k);
                *(pv+k) = *(pv+j);
                *(pv+j) = t;
            }
        }
    }

    // Saída
    puts("Vetor gerado: ");
    for (int k=0; k<TAM; k++){
        printf("[%p] : %d\n",pv+k,*(pv + k));
        // printf("[%p] : %d\n",pv+k,pv[k]);
    }
    // printf("\n");

    return 0;
}

