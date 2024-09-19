//Crie um programa que leia uma string do usuário usando gets() e a exiba na tela.

#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[30];

    printf("Informe um nome:");
    gets(nome);

    printf("%s", nome);
}