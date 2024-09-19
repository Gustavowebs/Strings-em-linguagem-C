//Crie um programa que leia duas strings. Copie o conteúdo da segunda string para a primeira e exiba o resultado. Não use a função strcpy().

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char strg1[30], strg2[30];
    int i;

    printf("Informe um nome:");
    gets(strg1);

    for(i=0; strg1[i] != '\0'; i++){
        strg2[i] = strg1[i];
    }
    strg2[i] = '\0';
    printf("%s", strg2);
}
