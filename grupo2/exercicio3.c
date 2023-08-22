#include <stdio.h>

int main(){
    int number;

    printf("Digite um numero: \n");
    scanf("%d", &number);
    fflush(stdin);

    if(number<100){
        number*= 1.10;
        printf("Valor com 10 porcento de aumento: %d \n", number);
    }else{
        number*= 1.20;
        printf("Valor com 20 porcento de aumento: %d \n", number);
    }

}