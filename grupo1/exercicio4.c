#include <stdio.h>

int main(){
    int celsius;
    printf("Digite uma temperatura em graus celsios: ");
    scanf("%d", &celsius);

    int fahreinheit;
    fahreinheit = (celsius/0.55) + 32;
    printf("A temperatura em fehreinheit é: %d", fahreinheit);
    printf("\n");
}