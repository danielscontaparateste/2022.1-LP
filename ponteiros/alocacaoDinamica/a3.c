#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

void gerarDados(int *, int, int);
void mostrarDados(int *, int);

int main(){
	int *p = NULL;
	int qt;

	printf("Digite a quantidade de elementos: \n");
	scanf("%d",&qt);

	// p = (int *) malloc(qt * sizeof(int));

	p = (int *) calloc(qt, sizeof(int));
	
	gerarDados(p, qt, MX);

	mostrarDados(p, qt);

	free(p);

}

void gerarDados(int *v, int tam, int mx){
	srand(time(NULL));
	for (int k=0; k<tam; k++){
		*(v+k) =  rand()% mx; // Gerar de [0,MX-1]
	}
}

void mostrarDados(int *v, int tam){
	for (int k=0; k<tam; k++){
		printf("%d ",*(v+k));
	}
	printf("\n");
}