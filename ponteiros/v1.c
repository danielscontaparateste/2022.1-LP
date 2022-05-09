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
        // *(pv + k) = MI + rand() % RG;
        *(v + k) = MI + rand() % RG;
        // v[k] = MI + rand() % RG;
    }

    // Processamento 
    int s= 0;
    for (int k=0; k<TAM; k++){
        s += *(pv + k);
    }

    // Saída
    puts("Vetor gerado: ");
    for (int k=0; k<TAM; k++){
        printf("[%p] : %d\n",pv+k,*(pv + k));
        // printf("[%p] : %d\n",pv+k,pv[k]);
    }
    // printf("\n");

    printf("\tSomatório: %d\n",s);

    return 0;
}

