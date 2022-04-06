#include <stdio.h>

int main(){
    int x, y;

    printf("Digite um primeiro número: \n");
    scanf("%d", &x);

    printf("Digite um segundo número: \n");
    scanf("%d", &y);

    printf("Resultado: %d + %d = %d\n", x, y, x + y);

    return 0;
}