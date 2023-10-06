#include <stdio.h>

float calculaAreaTri(int base, int altura);

int main(void){
    int base, altura;
    float area;
    printf("Insira a base e altura do triangulo para obter a area\n");
    scanf("%d", &base);
    scanf("%d", &altura);
    area = calculaAreaTri(base, altura);
    printf("A area do triangulo e: %.2f", area);
}

float calculaAreaTri(int base, int altura){
    float area;
    area = (base * altura)/2;
    return area;
}