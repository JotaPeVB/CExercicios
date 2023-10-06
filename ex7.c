#include <stdio.h>

int main(void){
    int nota;
    printf("Insira sua nota\n");
    scanf("%d", &nota);
    if(nota >= 6){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
}