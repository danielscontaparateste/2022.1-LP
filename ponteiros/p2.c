/* Receber dois números do usuário e apresentar a sua soma */

#include <stdio.h>

int main(){
    int x, y, s, *px = NULL, *py = NULL, *ps = NULL;
    
    //Associar os ponteiros as variáveis
    px = &x;
    py = &y;
    ps = &s;

    // Ler os valores
    printf("Primeiro valor: \n");
    scanf("%d",px);
    printf("Segundo valor: \n");
    scanf("%d",py);

    // Efetuar a somar
    *ps = *px + *py;


    printf("%d + %d = %d\n",*px,*py,*ps);
    printf("x: [%p]\ny: [%p]\ns: [%p]\n",px,py,ps);

    return 0;
}