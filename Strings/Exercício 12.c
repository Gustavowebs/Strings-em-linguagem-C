//Desenvolva um programa que leia uma string e a exiba invertida. Não utilize funções prontas como strrev().

#include <stdio.h>
#include <stdlib.h>

int main(){
    char strg[30];
    int i, tamanho;

    printf("Informe uma frase:");
    fgets(strg, 30, stdin);

    tamanho = strlen(strg) - 1;
    
    
    printf("Frase invertida!\n");

    for(i=tamanho; i>=0; i--){
        printf("%c", strg[i]);
    }
}