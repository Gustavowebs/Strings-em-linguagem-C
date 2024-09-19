//Escreva um programa que leia uma frase e conte quantas palavras existem nela. Considere que as palavras são separadas por espaços.

#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int i, palavras = 0;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    frase[strcspn(frase, "\n")] = 0;

    // Conta as palavras
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ' || frase[i+1] == '\0') {
            palavras++;
        }
    }

    printf("A frase tem %d palavras.\n", palavras);

}