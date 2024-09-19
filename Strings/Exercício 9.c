//Desenvolva um programa que leia duas strings. Exiba uma mensagem informando se as strings são iguais ou diferentes. Não use a função strcmp().

#include <stdio.h>
#include <stdlib.h>

int main(){
    char str1[30], str2[30];

    printf("Informe o primeiro nome:");
    gets(str1);
    printf("Informe o segundo nome:");
    gets(str2);

    if(str1[0] == str2[0]){
        printf("Os nome digitado sao iguais!");
    }else{
        printf("Os nome digitado nao sao iguais!");
    }
}