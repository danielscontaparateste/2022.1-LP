// Exemplo do slide

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct UF{
    char codigo[3];
    char descricao[50];
};


struct Cidade{
    char codigo[3];
    char descricao[50];
    struct UF *pUf;
};

void imprimirDadosCidade(struct Cidade *);

int main(){

    struct Cidade *pCid;
    struct UF *pUf;

    pCid = malloc(sizeof(struct Cidade));
    pUf = malloc(sizeof(struct UF));

    strcpy(pUf->codigo,"CE");
    strcpy(pUf->descricao,"Ceará");

    strcpy(pCid->codigo,"CA");
    strcpy(pCid->descricao,"Caucaia");
    pCid->pUf = pUf;

    imprimirDadosCidade(pCid);

    return 0;
}

void imprimirDadosCidade(struct Cidade *p){
    printf("%s está localizado em %s (%s)\n",
            p->descricao,p->pUf->descricao,p->pUf->codigo);
}


