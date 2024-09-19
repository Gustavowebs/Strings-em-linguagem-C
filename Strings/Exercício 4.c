//Crie um programa que leia duas strings. Use a função strcpy() para copiar o conteúdo da segunda string para a primeira e exiba o resultado.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char strg1[100], strg2[100];

    printf("Informe um nome:");
    gets(strg1);

    strcpy(strg2, strg1);
    printf("%s", strg2);
}