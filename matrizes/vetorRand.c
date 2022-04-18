#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 40
#define INI -200
#define QTD 401

int main(){
    int v[TAM];

    srand(time(NULL));

    // Entrada de dados
    puts("Entre com os dados: ");
    for (int i=0; i<TAM; i++){
        v[i] = (rand() % QTD) + INI;
    }

    // Processamento
    int maior = v[0];
    for (int i=1; i<TAM; i++){
        if (maior<v[i]) maior = v[i];
        // maior = (maior<v[i])?v[i]:maior;
    }

    // //Saída
    puts("====");
    puts("Dados de entrada: ");
    for (int i=0; i<TAM; i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    printf("\t\tO maior elemento do vetor: %d\n",maior);    
    // printf("RAND_MAX: %d\n",RAND_MAX);

    return 0;
}


