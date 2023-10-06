#include <stdio.h>

int main(void){
    int idade;
    char nome[20];
    printf("Insira seu nome e idade\n");
    scanf("%s", nome);
    scanf("%d", &idade);
    printf("Seu nome: %s. Sua idade: %d", nome, idade);    
}