//Crie um programa que leia uma string e substitua todas as ocorrências de um caractere fornecido pelo usuário por outro caractere.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);

    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    
    if (strstr(str1, str2) != NULL) {
        printf("A segunda string é uma substring da primeira.\n");
    } else {
        printf("A segunda string não é uma substring da primeira.\n");
    }

}