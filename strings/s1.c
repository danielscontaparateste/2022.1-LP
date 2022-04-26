#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
    char str1[30], str2[15];

    system("clear");

    printf("Digite a primeira string: \n");
    scanf("%[^\n]",str1);
    getchar();

    printf("Digite a segunda string: \n");
    scanf("%[^\n]",str2);

    printf("str1: %s - qtd: %lu\n",str1, strlen(str1));
    printf("str2: %s - qtd: %lu\n",str2, strlen(str2));

    //##################### strlen #####################
    unsigned int k = 0;
    while(str1[k]!='\0') k++;
    printf("\n\n tam da str1: %u\n",k);

    //##################### strcat #####################
    unsigned j = 0;
    while(str2[j]!='\0'){
        str1[k+j] = str2[j];
        j++;
    }
    str1[k+j]='\0';

    printf("\n\n str1: %s\n",str1);
    

    return 0;

}
