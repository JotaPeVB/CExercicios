#include <stdio.h>

int quadrado(int num);
int cubo(int num);

int main(void){
    int num, cuboo, quadradoo;
    printf("Insira um numero e obtenha seu quadrado e o seu cubo\n");
    scanf("%d", &num);
    quadradoo = quadrado(num);
    cuboo = cubo(num);
    printf("Quadrado %d e Cubo %d", quadradoo, cuboo);

}

int quadrado(int num){
    int quadrado;
    quadrado = num * num;
    return quadrado;
}

int cubo(int num){
    int cubo;
    cubo = num * num * num;
    return cubo;
}