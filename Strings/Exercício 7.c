//Escreva um programa que leia duas strings e concatene-as em uma terceira string. Exiba a string concatenada na tela. Não use a função strcat().

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[100], str2[100], str3[200];
    int i, j;

    printf("Informe uma frase incial:");
    gets(str1);
    printf("Informe uma segunda frase:");
    setbuf(stdin, NULL);
    gets(str2);

    for(i=0; str1[i] != '\0'; i++){
        str3[i] = str1[i];
    }
    for(j=0; str2[j] != '\0'; j++, i++){
        str3[i] = str2[j];
    }
    str3[i] = '\0';

    printf("%s", str3);
}
