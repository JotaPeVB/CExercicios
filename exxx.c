#include <stdio.h>

int main(void){
    int numSecreto;
    numSecreto = 897;
    int num = 0;
    printf("Tente acertar o numero secreto\n");
    while(numSecreto != num){
        scanf("%d", &num);
        printf("ANTES. Passou aqui, %d e %d\n", num, numSecreto);
        if(num < numSecreto){
            printf("O numero secreto e maior\n");
        }else if(num > numSecreto){
            printf("O numero secreto e menor\n");
        }else{
            printf("Acertou, o numero secreto e: %d\n", numSecreto);
        }
        printf("Passou aqui, %d e %d\n", num, numSecreto);
    }
}