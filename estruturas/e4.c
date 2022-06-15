/* Crie uma estrutura para armazenar: 
um ponteiro para um vetor alocado dinamicamente, 
o tamanho desse vetor e
a media desse vetor */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define MX 100

void preencherVetor(int *, int, int, int);
void imprimirVetor(int *, int);
void media(int *, int, float *);

struct Dados{
    int *pData;
    int tamanho;
    float media;
    
};

int main(){

    struct Dados d1;
    
    puts("Entre o tamanho do vetor de dados: ");
    scanf("%d",&d1.tamanho);

    d1.pData = (int *) malloc(d1.tamanho * sizeof(int));
    // d1.pData = (int *) calloc(d1.tamanho, sizeof(int));

    if (!d1.pData){
        puts("Não foi possível realizar a alocação");
        exit(1);
    }

    preencherVetor(d1.pData, d1.tamanho, INI, MX);
    imprimirVetor(d1.pData, d1.tamanho);
    media(d1.pData,d1.tamanho,&d1.media);

    printf("O resultado do media é: %.2f \n",d1.media);

    free(d1.pData);

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