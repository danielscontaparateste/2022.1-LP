// Somatorio dos elementos pares.
// Impressao da matriz no formato linha x coluna. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QL 3
#define QC 4

#define MX 10

int main(){
	int mat[QL][QC], soma=0;
	int b[2][2] = { {1,2}, {3,4} };
	int c[2][2] = { {1}, {3,4} };
	char d[2][2] = { {'a'}, {'c','d'} };

	srand(time(NULL));

	//Coleta dos dados
	for(int k=0; k<QL; k++){
		for (int j=0; j<QC; j++){
			mat[k][j] = rand()%MX;
		}
	}

	// Processamento
	for(int k=0; k<QL; k++){
		for (int j=0; j<QC; j++){
			if (!(mat[k][j]%2)) soma += mat[k][j];	
		}
	}
	
	// Imprimir os dados gerados
	for(int k=0; k<QL; k++){
		// if (k) printf("\n");
		for (int j=0; j<QC; j++){
			printf("%d ",mat[k][j]);
		}
		printf("\n");
	}
	// printf("\n");
	printf("***Somatorio: %d\n",soma);

	// Imprimir os dados da matriz de char
	for(int k=0; k<2; k++){
		for (int j=0; j<2; j++){
			printf("%#x ",d[k][j]);
		}
		printf("\n");
	}

    return 0;
}

