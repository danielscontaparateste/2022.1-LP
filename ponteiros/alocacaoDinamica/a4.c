#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

void gerarDados(int *, int, int);
void mostrarDados(int *, int);

int main(){
	int *p = NULL;
	int qt, nqt;
	
	printf("Digite a quantidade de elementos: \n");
	scanf("%d",&qt);

	// p = (int *) calloc(qt, sizeof(int));
	// p = (int *) malloc(qt * sizeof(int));
	p = (int *) realloc(NULL, qt * sizeof(int)); 
	//p = (int *) realloc(p, qt * sizeof(int)); 

	if (!p){
		puts("Não existe memoria disponível");
		exit(1);
	}
	
	gerarDados(p, qt, MX);
	mostrarDados(p, qt);
	printf("p: %p\n",p);

	int *p_ = p; // Backup do endereco
	do {
		p = p_;

		printf("Digite a NOVA quantidade de elementos: \n");
		scanf("%d",&nqt);

		// Redimensionamento do espaço do alocado
		p = (int *) realloc(p, nqt * sizeof(int));
			
		if (!p){
			puts("Nao existe memoria disponível. Tente outro valor. ");
		}

	}while(!p);
	
	printf("p: %p\n",p);
	
	gerarDados(p+qt, nqt, MX);
	// mostrarDados(p, nqt);
	mostrarDados(p, qt);

	free(p);
	return 0;

}

void gerarDados(int *v, int tam, int mx){
	srand(time(NULL));
	for (int k=0; k<tam; k++){
		*(v+k) =  rand()% mx; // Gerar de [0,MX-1]
	}
}

void mostrarDados(int *v, int tam){
	for (int k=0; k<tam; k++){
		printf("[%p]\t%d\n",v+k,*(v+k));
	}
	printf("\n");
}