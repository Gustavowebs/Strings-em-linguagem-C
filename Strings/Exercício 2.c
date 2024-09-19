//Escreva um programa que receba uma string do usuário e utilize a função strlen() para exibir o número de caracteres dessa string.

#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[30];

    printf("Informe um nome:");
    gets(str);

    printf("O tamanho do nome eh: %d", strlen(str));
}