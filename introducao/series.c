#include <stdio.h>

int series(){
    static int x = 100;

    x = x + 23;

    return x;
}

int main(){

    printf("%#X \n", series()); //%x para imprimir em hexadecimal.
    printf("%#X \n", series());
    printf("%#X \n", series());

    return 0;
}
