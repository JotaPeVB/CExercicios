#include <stdio.h>

int soma(int num1, int num2);
int subtracao(int num1, int num2);
int multiplicacao(int num1, int num2);
float divisao(int num1, int num2);
float mediaPonderada(int quantidadeNotas);

int main(void){
    char letra;
    int num1, num2, quantidadeNotas;
    printf("BEM VINDO A CALCULADORA:\n ESCREVA UMA LETRA PRA ACESSAR A CALCULADORA:\n a - soma\n b - subtracao\n c - multiplicacao\n d- divisao\n e - media ponderada\n");
    scanf("%c", &letra);
    if(letra == 'a'){
        printf("Escreva os numeros desejados\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%d\n", soma(num1, num2));
    }else if(letra == 'b'){
        printf("Escreva os numeros desejados\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%d\n", subtracao(num1, num2));
    }else if(letra == 'c'){
        printf("Escreva os numeros desejados\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%d\n", multiplicacao(num1, num2));
    }else if(letra == 'd'){
        printf("Escreva os numeros desejados\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%.2f\n", divisao(num1, num2));
    }else if (letra == 'e'){
        printf("Escreva a quantidade de notas desejadas\n");
        scanf("%d", &quantidadeNotas);
        printf("%.2f\n", mediaPonderada(quantidadeNotas));
    }
}

int soma(int num1, int num2){
    return num1 + num2;
}
int subtracao(int num1, int num2){
    return num1 - num2;
}
int multiplicacao(int num1, int num2){
    return num1 * num2;
}
float divisao(int num1, int num2){
    return num1/num2;
}
float mediaPonderada(int quantidadeNotas){
    float somaNotas = 0, somaPesos = 0;
    for(int i = 0; i < quantidadeNotas; i++){
        float nota = 0, peso = 0;
        printf("Insira uma nota e o seu peso\n");
        scanf("%f ", &nota);
        scanf("%f", &peso);
        somaNotas = somaNotas + (nota*peso);
        somaPesos = somaPesos + peso;
    }
    return somaNotas/somaPesos;
}
