#include <stdio.h>

int main(){
    int numero = 5;
    int *p = NULL;
    int *p2 = NULL;

    p = &numero;
    p2 = p;

    *p2 = *p2 * 10; 

    printf("[%p]\t numero: %d\n",p,*p);
    printf("[%p]\t numero: %d\n",p2,*p2);

    return 0;
}