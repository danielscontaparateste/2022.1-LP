#include <stdio.h>

struct Aluno{
    float n1;
    float n2;
    float media;
};

int main(){
    struct Aluno a1;

    puts("Entre com a nota 1: ");
    scanf("%f",&a1.n1);

    puts("Entre com a nota 2: ");
    scanf("%f",&a1.n2);

    a1.media = (a1.n1 + a1.n2)/2;
    
    printf("Media: %.2f\n",a1.media);

    return 0;
}