/*
Fazer um programa que solicita um número decimal e imprime o
correspondente em hexa e octal.
*/

#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int decimalNumber;

    // Solicita ao usuário para inserir o número decimal
    printf("Digite um número decimal: ");
    scanf("%d", &decimalNumber);

    // Imprime o número em hexadecimal e octal
    printf("O número decimal %d em hexadecimal é: 0x%X\n", decimalNumber, decimalNumber);
    printf("O número decimal %d em octal é: %o\n", decimalNumber, decimalNumber);

    // Conversão e impressão do número em binário
    printf("O número decimal %d em binário é: ", decimalNumber);
    decimalToBinary(decimalNumber);
    printf("\n");

    return 0;
}