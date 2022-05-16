#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define MX 100

void preencherVetor(int *, int, int, int);
void imprimirVetor(int *, int);
void media(int *, int, float *);

int main(){
    int qtd, *pv = NULL;
    float m;
    
    // Alocação dinâmica de memória
    puts("Entre com o tamanho do vetor: \n");
    scanf("%d",&qtd);
    pv = malloc(qtd * sizeof(int));

    // Coleta de dados
    preencherVetor(pv, qtd, INI, MX);
    imprimirVetor(pv, qtd);

    // Processamento
    media(pv, qtd, &m);
    
    // Saída
    printf("Média: %.2f\n",m);

    // Liberar a memória alocada dinamicamente
    free(pv);

    return 0;
}

void media(int *p, int t, float *pm){
    int s=0;
    for(int k=0; k<t; k++){
        s += *(p+k);
    }
    *pm = ((float) s)/t;
}

void preencherVetor(int *p, int t, int ini, int q){
    srand(time(NULL));
    for (int k=0; k<t; k++){
        *(p + k) = ini + rand() % q;
    }
}

void imprimirVetor(int *p, int t){
    for (int k=0; k<t; k++){
        printf("[%p] : %d\n",p+k,*(p + k));
    }
}


