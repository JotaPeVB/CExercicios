#include <stdio.h>

float converteFahrenheit(int celsius);

int main(void){
    int grausCelsius;
    float grausFahrenheit;
    printf("Insira qual a temperatura que voce deseja saber em farenheit\n");
    scanf("%d", &grausCelsius);
    grausFahrenheit = converteFahrenheit(grausCelsius);
    printf("%d celsius equivalem a %.2f graus Fahrenheit\n", grausCelsius, grausFahrenheit);
}

float converteFahrenheit(int celsius){
    float fahrenheit;
    fahrenheit = (celsius * 1.8) + 32;
    return fahrenheit;
}