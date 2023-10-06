#include <stdio.h>

int main(void){
    int num, contador, resultado;
    printf("Insira um número para obter a sua tabuada\n");
    scanf("%d", &num);
    for(contador = 1; contador <= 10; contador++){
        resultado = 0;
        resultado = num * contador;
        printf("%d X %d = %d\n", num, contador, resultado);
    }
}