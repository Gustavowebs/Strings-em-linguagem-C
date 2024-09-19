//Escreva um programa que receba uma string do usuário e exiba o número de caracteres dessa string. Não use a função strlen().

#include <stdio.h>
#include <stdlib.h>

int main(){
    char strg1[30];
    int strg[30];
    int i, contador=0;

    printf("Informe um nome:");
    gets(strg1);

    for(i = 0;  strg1[i] != '\0'; i++){
        contador++;
    }

    printf("A palavra %s, possui %d palavras", strg1, contador);
}
