//Escreva um programa que verifique se uma string fornecida pelo usuário é um palíndromo (palavras que podem ser lidas da mesma maneira de trás para frente, como "arara").

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Digite uma palavra ou frase: ");
    fgets(str, 100, stdin);

    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    i = 0;
    j = len - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            printf("Não é um palíndromo.\n");
            return 0;
        }
        i++;
        j--;
    }

    printf("É um palíndromo.\n");
}