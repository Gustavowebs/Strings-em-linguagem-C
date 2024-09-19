//Desenvolva um programa que leia uma frase e uma palavra. O programa deve contar quantas vezes essa palavra aparece na frase.

#include <stdio.h>
#include <string.h>

int main() {
    char frase[100], palavra[20];
    int count = 0;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    printf("Digite a palavra a ser procurada: ");
    fgets(palavra, 20, stdin);

    frase[strcspn(frase, "\n")] = 0;
    palavra[strcspn(palavra, "\n")] = 0;

    char *ptr = frase;
    while ((ptr = strstr(ptr, palavra)) != NULL) {
        count++;
        ptr++;
    }

    printf("A palavra '%s' aparece %d vezes na frase.\n", palavra, count);

    return 0;
}