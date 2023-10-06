#include <stdio.h>

int main(void){
    int ano;
    printf("Insira um ano pra verificar se é bissexto\n");
    scanf("%d", &ano);
    if(ano % 4 == 0){
        printf("É bissexto\n");
    }else{
        printf("Não é bissexto\n");
    }
}