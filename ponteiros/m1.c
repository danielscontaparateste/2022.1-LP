#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LIN 7
#define COL 4

#define INI 0
#define MX 100

void preencherVetor(int *, int, int, int);
int obterValor(int *, int, int, int);
void obterValorReferencia(int *, int, int, int, int *);
int *obterEndereco(int *, int, int, int, int);
void obterValorReferencia(int *, int, int, int, int *);

int main(){
    int m[LIN][COL];
    int *p = NULL;
    int x, y;

    srand(time(NULL));

    p = m[0]; // p = &M[0][0];

    preencherVetor(p, LIN*COL, INI, MX);

    puts("Entre com as coordenados do ponto que deseja visualizar: ");
    scanf("%d%d",&x,&y);
    
    // for(int k=0; k<LIN*COL; k++){
    //     *(p+k) = rand() % MX;
    // }

    // for(int i=0; i<LIN; i++){
    //     for (int j=0; j<COL; j++){
    //         m[i][j] = rand() % MX;        
    //     }
    // }

    for(int i=0; i<LIN; i++){
        for (int j=0; j<COL; j++){
            printf("%d ",m[i][j]);        
        }
        printf("\n");
    }

    int *endvalor = obterEndereco(p, LIN, COL, x, y);
    if (!endvalor){
        puts("As coordenadas nao pertencem a matriz");
        exit(1);
    }

    printf("O valor é (usando o endereco): %d\n", *endvalor);
    
    printf("----\n");
    printf("O valor é: %d\n", obterValor(p, COL, x, y) );

    printf("----\n");
    int r;
    obterValorReferencia(p, COL, x, y, &r);
    printf("O valor é (ref.): %d\n", r);

    return 0;
}


void preencherVetor(int *p, int t, int ini, int q){
    srand(time(NULL));
    for (int k=0; k<t; k++){
        *(p + k) = ini + rand() % q;
    }
}

int obterValor(int *p, int nc, int a, int b){
    return *(p + a * nc + b);
}

void obterValorReferencia(int *p, int nc, int a, int b, int *q){
    *q = *(p + a * nc + b);
}

int *obterEndereco(int *p, int nl, int nc, int a, int b){
    if ( (a<0 || a>= nl) || (b<0 || b>=nc) ) return 0;
    return (p + a * nc + b);
}