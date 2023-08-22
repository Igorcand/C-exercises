/*
Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.
*/

#include <stdio.h>

int main(){
    float metros;
    printf("Digite um valor em metros: \n");
    scanf("%f", &metros);

    printf("Decimetros: %f \n", metros*10);
    printf("Centimetros: %f \n", metros*100);
    printf("Milimetros: %f \n", metros*1000);

}