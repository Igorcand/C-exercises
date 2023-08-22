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

    if(decimalNumber>=0 && decimalNumber<=127){

        // Imprime o número em hexadecimal e octal
        printf("O número decimal %d em hexadecimal é: 0x%X\n", decimalNumber, decimalNumber);
        printf("O número decimal %d em octal é: %o\n", decimalNumber, decimalNumber);

        // Conversão e impressão do número em binário
        printf("O número decimal %d em binário é: ", decimalNumber);
        decimalToBinary(decimalNumber);
        printf("\n");
    }else{
        printf("Fora do range \n");
    }

    return 0;
}