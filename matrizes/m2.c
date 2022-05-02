// Gerar uma matriz e apresentar a media dos elementos

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define QTD 100

void imprimirMatriz(int *pm, int lin, int col);

int main(){
    int m[TAM][TAM];
    float media;

    // Gerar os dados
    for(int k=0; k<TAM; k++){
        for (int j=0; j<TAM; j++){
            m[k][j] = rand() % 100;
        }
    }

    // Imprimir Matriz Gerada
    imprimirMatriz(m[0], TAM, TAM);

    // Processamento
    int soma = 0;
    // for(int k=0; k<TAM; k++){
    //     for (int j=0; j<TAM; j++){
    //         if (k==j) soma += m[k][j];
    //     }
    // }
    for (int k=0; k<TAM; k++){
        soma += m[k][k];
    }

    media = ( (float) soma) / TAM;

    printf("Media da diagonal principal: %.2f\n",media);


    return 0;
}

void imprimirMatriz(int *pm, int lin, int col){

    for (int k=0; k<lin*col; k++){
        printf("%d\t",*(pm+k));
        if ( ( (k+1) % col) == 0 ) printf("\n");
    }
    printf("\n");
}