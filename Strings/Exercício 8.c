//Desenvolva um programa que leia duas strings e utilize a função strcmp() para compará-las. Exiba uma mensagem informando se as strings são iguais ou diferentes.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[30], str2[30];

    printf("Informe um nome:");
    gets(str1);
    printf("Informe um nome novamente:");
    gets(str2);

    if(strcmp(str1, str2) == 0){
        printf("Os dois nomes sao iguais");
    }else{
        printf("Os dois nomes sao diferentes");
    }
}