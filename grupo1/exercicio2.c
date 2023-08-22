/*
Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9
*/

#include <stdio.h>

int main(){
    int n;
    printf("Escolha um numero para sabe a tabuada de 1 a 9: ");
    scanf("%d", &n);
    int i;
    for(i=0; i<11;i++){
        printf("%d x %d  = %d \n", n, i, n*i);
    }
}