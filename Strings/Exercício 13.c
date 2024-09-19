//Crie um programa que leia uma string e remova todos os espaços em branco.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], nova_str[100];
    int i, j = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            nova_str[j++] = str[i];
        }
    }
    nova_str[j] = '\0';

    printf("String sem espaços: %s\n", nova_str);

}