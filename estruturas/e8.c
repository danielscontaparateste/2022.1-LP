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
// void media(int *, int, float *);

struct Dados{
    int **pData;
    int lin;
    int col;
};

int main(int argc, char *argv[]){

    struct Dados d1;
    
    if (argc!=5){
        printf("Uso\n\t %s lin col inicio intervalo\n\n",argv[0]);
        exit(1);
    }

    d1.pData = (int**) malloc(d1.lin * sizeof(int*));
    for (int k=0; k<d1.lin; k++){
        d1.pData[k] = malloc(d1.col*sizeof(int)); 
    }

    for (int k=0; k<d1.lin; k++){
        preencherVetor(d1.pData[k], d1.col, atoi(argv[3]), atoi(argv[4]));
    }

    for (int k=0; k<d1.lin; k++){
        imprimirVetor(d1.pData[k], d1.col);
    }

    // for (int k=0; k<TAM; k++){
    //     free(d1.pData[k]);
    // }
    
    return 0;

}


void preencherVetor(int *p, int t, int ini, int q){
    srand(time(NULL));
    for (int k=0; k<t; k++){
        *(p + k) = ini + rand() % q;
    }
}

// void media(int *p, int t, float *pm){
//     int s=0;
//     for(int k=0; k<t; k++){
//         s += *(p+k);
//     }
//     *pm = ((float) s)/t;
// }

void imprimirVetor(int *p, int t){
    for (int k=0; k<t; k++){
        printf("[%p] : %d\n",p+k,*(p + k));
    }
}