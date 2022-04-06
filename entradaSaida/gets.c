#include <stdio.h>

//char *fgets(char *str, int n, FILE *stream)

#define TAM 10

int main(){
	char str[TAM]; //Daniel

	// fgets(str, TAM, stdin);

    scanf("%s",str); // Para casa: como resolver o problema de leitura do scanf? 

    // gets(str);

	puts(str);

	printf("\t %s \n",str);

	return 0;
}