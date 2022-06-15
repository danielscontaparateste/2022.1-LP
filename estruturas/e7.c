/* Crie uma estrutura para armazenar: 
um vetor de ponteiros para dois vetores alocados dinamicamente, 
os tamanho desses vetores e
as medias desses vetores */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void preencherVetor(int *, int, int, int);
void imprimirVetor(int *, int);
void media(int *, int, float *);

#define TAM 2

struct Dados{
    int *pData[TAM];
    int tamanho[TAM];
    float media[TAM];
};

int main(int argc, char *argv[]){

    struct Dados d1;
    
    if (argc!=5){
        printf("Uso\n\t %s tamanho1 tamanho2 inicio intervalo\n\n",argv[0]);
        exit(1);
    }

    // d1.tamanho[0] = atoi(argv[1]);
    // d1.tamanho[1] = atoi(argv[2]);
    for (int k=0; k<TAM; k++){
        d1.tamanho[k] = atoi(argv[k+1]);
    }

    // d1.pData[0] = (int *) malloc(d1.tamanho[0] * sizeof(int));
    // d1.pData[1] = (int *) malloc(d1.tamanho[1] * sizeof(int));
    for (int k=0; k<TAM; k++){
        d1.pData[k] = (int *) malloc(d1.tamanho[k] * sizeof(int));
        if (!d1.pData[k]){
            puts("Não foi possível realizar a alocação");
            exit(2);
        }
    }
    
    for (int k=0; k<TAM; k++){
        preencherVetor(d1.pData[k], d1.tamanho[k], atoi(argv[3]), atoi(argv[4]));
        imprimirVetor(d1.pData[k], d1.tamanho[k]);
        media(d1.pData[k],d1.tamanho[k],&d1.media[k]);
        printf("O resultado do media é no vetor %d: %.2f \n",k, d1.media[k]);
        sleep(2);
    }

    for (int k=0; k<TAM; k++){
        free(d1.pData[k]);
    }
    
    return 0;

}


void preencherVetor(int *p, int t, int ini, int q){
    srand(time(NULL));
    for (int k=0; k<t; k++){
        *(p + k) = ini + rand() % q;
    }
}

void media(int *p, int t, float *pm){
    int s=0;
    for(int k=0; k<t; k++){
        s += *(p+k);
    }
    *pm = ((float) s)/t;
}

void imprimirVetor(int *p, int t){
    for (int k=0; k<t; k++){
        printf("[%p] : %d\n",p+k,*(p + k));
    }
}