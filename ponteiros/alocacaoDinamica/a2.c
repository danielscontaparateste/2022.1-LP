#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define MX 100

void preencherVetor(int *, int, int, int);
void imprimirMatriz(int *, int, int);

int main(){
    int lin, col, *pv = NULL;
    float m;
    
    // Alocação dinâmica de memória
    puts("Entre com a qtd de linhas da matriz: ");
    scanf("%d",&lin);
    puts("Entre com a qtd de colunas da matriz: ");
    scanf("%d",&col);
    pv = malloc(lin * col * sizeof(int));

    // Coleta de dados
    preencherVetor(pv, lin*col, INI, MX);
    imprimirMatriz(pv, lin, col);

    // Processamento
    // Casa:  construir uma função para calcular a soma da diagonal principal.

    // Liberar a memória alocada dinamicamente
    free(pv);

    return 0;
}

void preencherVetor(int *p, int t, int ini, int q){
    srand(time(NULL));
    for (int k=0; k<t; k++){
        *(p + k) = ini + rand() % q;
    }
}

void imprimirMatriz(int *p, int qtdLin, int qtdCol){
    for (int k=0; k<qtdLin*qtdCol; k++){
        if (!(k % qtdCol)) printf("\n");
        printf("%02d ",*(p + k));
    }
    printf("\n");
}


