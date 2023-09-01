#include <stdio.h>

int main(void){
    char palavra[30] = "bom dia pessoal rudo bem", vogais[10] = "aeiou";
    int contador = 0, passapalavra = 0;
    while(palavra[passapalavra] != '\0'){
        if(palavra[passapalavra] == vogais[0]){
            contador++;
        }else if(palavra[passapalavra] == vogais[1]){
            contador++;
        }else if(palavra[passapalavra] == vogais[2]){
            contador++;
        }else if(palavra[passapalavra] == vogais[3]){
            contador++;
        }else if(palavra[passapalavra] == vogais[4]){
            contador++;
        }
        passapalavra++;
    }
    printf("%d\n", contador);
