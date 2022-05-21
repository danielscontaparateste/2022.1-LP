#include <stdio.h>

int main(){
    int a, b, c;
    int *pa = NULL, *pb = NULL, *pc = NULL;

    pa = &a;
    pb = &b;
    pc = &c;

    puts("Entre com o primeiro número");
    scanf("%d",pa);

    puts("Entre com o primeiro número");
    scanf("%d",pb);

    *pc = *pa + *pb;

    printf("Resultado: %d - a partir do ponteiro: %d\n", c, *pc);
    printf("Endereços: a: [%p], b: [%p], c: [%p]\n",pa, pb, pc);

    return 0;

}