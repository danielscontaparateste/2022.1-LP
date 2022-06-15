#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Aluno{
    float n1;
    float n2;
    float media;
};

float random_float();
float media1(float , float);
float media2(struct Aluno);
struct Aluno media3(struct Aluno);

int main(){
    struct Aluno a1, a2;

    // ===================
    puts("Entre com a nota 1: ");
    scanf("%f",&a1.n1);

    puts("Entre com a nota 2: ");
    scanf("%f",&a1.n2);

    // =================
    puts("Entre com a nota 1: ");
    scanf("%f",&a2.n1);

    puts("Entre com a nota 2: ");
    scanf("%f",&a2.n2);

    // ====================
    // a1.media = (a1.n1 + a1.n2)/2;
    // a2.media = (a2.n1 + a2.n2)/2;

    // a1.media = media1(a1.n1, a1.n2);
    // a2.media = media1(a2.n1, a2.n2);

    // puts("Usando a funcao media2");
    // a1.media = media2(a1);
    // a2.media = media2(a2);

    puts("Usando a funcao media3");
    a1 = media3(a1);
    a2 = media3(a2);

    // =============
    
    printf("Media Aluno 1: %.2f\n",a1.media);
    printf("Media Aluno 2: %.2f\n",a2.media);

    return 0;
}

float media1(float nota1, float nota2){
    return ( (nota1+nota2) / 2);
}

float media2(struct Aluno a){
    return ( (a.n1 + a.n2) / 2);
}

struct Aluno media3(struct Aluno a){
    a.media = ( (a.n1 + a.n2) / 2);
    return a;
}

// by Augusto Ribeiro.
float random_float() {
  return ( ( (float)rand() ) / (float)RAND_MAX ) * 5;
}


