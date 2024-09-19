//Crie um programa que leia uma string e conte quantas vogais existem nela.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[30];
    int i, cont = 0; 

    printf("Informe um nome: ");
    fgets(str1, 30, stdin); 

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == 'a' || str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'e' || str1[i] == 'I' || str1[i] == 'i' || str1[i] == 'O' || str1[i] == 'o' || str1[i] == 'U' || str1[i] == 'u'){
            cont++;
        }
    }

    printf("Numero de vogais eh: %d\n", cont);
}