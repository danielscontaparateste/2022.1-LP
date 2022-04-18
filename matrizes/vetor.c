// Receber um vetor de double do usuario e apresentar o maior valor

#include <stdio.h>

#define TAM 3

int main(){
    double v[TAM];

    // Entrada de dados
    puts("Entre com os dados: ");
    for (int i=0; i<TAM; i++){
        scanf("%lf",&v[i]);
    }

    // Processamento
    double maior = v[0];
    for (int i=1; i<TAM; i++){
        if (maior<v[i]) maior = v[i];
        // maior = (maior<v[i])?v[i]:maior;
    }

    //Saída
    puts("====");
    puts("Dados de entrada: ");
    for (int i=0; i<TAM; i++){
        printf("[%d] : %.2lf\n",i,v[i]);
    }
    printf("\t\tO maior elemento do vetor: %.2lf\n",maior);    

    return 0;
}


