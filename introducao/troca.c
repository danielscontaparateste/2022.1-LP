#include <stdio.h>

int main(){

	int a, b;

	printf("Digite a\n" );
    scanf("%d",&a);

	printf("Digite b\n" );
    scanf("%d",&b);

    int c;

    c = a;
    a = b;
    b = c;

    printf("a = %d, b = %d\n\n", a, b); 

	return 0;
}