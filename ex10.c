#include <stdio.h>

int main(void){
    int numSecreto = 897;
    int num, contador = 0;
    printf("Tente acertar o numero secreto\n");
    while(contador < 10){
        scanf("%d", &num);
        if(num < numSecreto){
            printf("O numero secreto e maior\n");
            contador = 0;
            contador++;
        }else if(num > numSecreto){
            printf("O numero secreto e menor\n");
            contador = 0;
            contador++;
        }else{
            printf("Acertou, o numero secreto e: %d\n", numSecreto);
            contador = 11;
        }
    }
}