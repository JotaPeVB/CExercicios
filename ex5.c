#include <stdio.h>

int main(void){
    int num;
    printf("Digite um numero\n");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("O número %d é par", num);
    }else{
        printf("O número %d é impar", num);
    }
}