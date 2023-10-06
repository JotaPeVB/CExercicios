#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float notas[3];
} alunos;

alunos obterDados();

void imprimeDados(alunos aluno);

float calculaMedia(alunos aluno);

int main(){
    alunos aluno;
    aluno = obterDados();
    imprimeDados(aluno);
    printf("A média das notas de %s e: %.2f", aluno.nome, calculaMedia(aluno));
   
}

alunos obterDados(){
    alunos aluno;
    char nome[50];
    float nota = 0;
    int contador = 0;
    scanf("%s", nome);
    strcpy(aluno.nome, nome);
    for(contador = 0; contador < 3; contador++){
        scanf("%f", &nota);
        aluno.notas[contador] = nota;
    } 
    return aluno;
}

void imprimeDados(alunos aluno){
    int contador = 0;
    printf("Nome: %s\n", aluno.nome);
    printf("Notas: ");
    while(contador < 3){
        printf("[%.2f]", aluno.notas[contador]);
        contador++;
    }
}

float calculaMedia(alunos aluno){
    float media = 0;
    int contador = 0;
    while(contador < 3){
        media = media + aluno.notas[contador];
        contador++;
    }
    return media/3;
}