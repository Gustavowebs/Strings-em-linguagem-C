//Escreva um programa que leia duas strings e utilize a função strcat() para concatená-las. Exiba a string resultante.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[30], str2[30];

    printf("Informe um nome:");
    gets(str1);
    printf("Informe o sobrenome:");
    gets(str2);

    strcat(str1, str2);
    printf("%s", str1);
}