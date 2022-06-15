#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

struct Alunos{
    float *pNotas;
    int quantNotas;
    float media;
};

float random_float();
// float media2(struct Alunos);


int main(){
    struct Alunos aln[TAM];

    // ===================
    for (int k=0; k<TAM; k++){

        printf("===\nAluno %d\n",k+1);
        
        puts("Quantidade de notas: ");
        scanf("%d",&aln[k].quantNotas);

        aln[k].pNotas = (float *) malloc(aln[k].quantNotas * sizeof(float));

        for (int j=0; j<aln[k].quantNotas; j++){
            aln[k].pNotas[j] = random_float();
            printf("Nota %d: %.2f\n",j,aln[k].pNotas[j]);

        }

        
    }

    // ====================
    // a1.media = (a1.n1 + a1.n2)/2;
    // a2.media = (a2.n1 + a2.n2)/2;

    // a1.media = media1(a1.n1, a1.n2);
    // a2.media = media1(a2.n1, a2.n2);

    // puts("Usando a funcao media2");
    // a1.media = media2(a1);
    // a2.media = media2(a2);

    // puts("Usando a funcao media3");
    // a1 = media3(a1);
    // a2 = media3(a2);

    // for (int k=0; k<TAM; k++){
    //     aln[k].media = media2(aln[k]);
    // }
    
   
    // // ===================
    // for (int k=0; k<TAM; k++){
    //     printf("===\nAluno %d\n",k+1);
    //     printf("Media: %.2f\n",aln[k].media);
    // }

    return 0;
}


// float media2(struct Alunos a){
//     return ( (a.n1 + a.n2) / 2);
// }



// by Augusto Ribeiro.
float random_float() {
  return ( ( (float)rand() ) / (float)RAND_MAX ) * 10;
}


