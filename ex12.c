#include <stdio.h>

void fibonacci(int num);

int main(void){
    fibonacci(15);
}

void fibonacci(int num){
    int numAnterior = 0, proxNum = 1;
    printf("%d, %d ", numAnterior, proxNum);
    for(int i = 0; i <= num; i++){
        proxNum = numAnterior + proxNum;
        numAnterior = proxNum - numAnterior;
        printf(", %d ", proxNum);
    }
}
