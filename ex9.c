#include <stdio.h>

int main(void){
    int num;
    printf("Insiram um numero\n");
    scanf("%d", &num);
    if(num > 0){
        printf("É positivo\n");
    }else if(num < 0){
        printf("É negativo\n");
    }else{
        printf("É zero\n");
    }
}