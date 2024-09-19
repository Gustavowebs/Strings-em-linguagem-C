//Desenvolva um programa que leia uma frase e exiba qual é a maior palavra encontrada nela.

#include <stdio.h>
#include <string.h>

int main() {
    char frase[100], maiorPalavra[100];
    int i, inicioPalavra = 0, tamanhoMaximo = 0, tamanhoAtual = 0;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    frase[strcspn(frase, "\n")] = 0;

    for (i = 0; frase[i] != '\0'; i++) {

        if (frase[i] == ' ' || frase[i] == '\0') {

            tamanhoAtual = i - inicioPalavra;
            if (tamanhoAtual > tamanhoMaximo) {
                tamanhoMaximo = tamanhoAtual;
                strncpy(maiorPalavra, &frase[inicioPalavra], tamanhoMaximo);
                maiorPalavra[tamanhoMaximo] = '\0';
            }
            inicioPalavra = i + 1;
        }
    }

    printf("A maior palavra é: %s\n", maiorPalavra);
}