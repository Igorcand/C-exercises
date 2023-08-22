#include <stdio.h>
#include <string.h> 


int main(){
    int n1;

    printf("Digite um numero: \n");
    scanf("%d", &n1);
    fflush(stdin);

    int n2;

    printf("Digite outro numero: \n");
    scanf("%d", &n2);
    fflush(stdin);

    char operador[1];

    printf("Digite um operador: \n");
    scanf("%s", operador);
    fflush(stdin);
    printf("Digite um operador %s: \n", operador);

    if(strcmp(operador,"+") == 0){
        int soma;
        soma = n1+n2;
        printf("A soma é %d: \n", soma);
    }else{
        if(strcmp(operador,"-") == 0){
            int sub;
            sub = n1-n2;
            printf("A subtracao é %d: \n", sub);
        }else{
            if(strcmp(operador,"*") == 0){
                int mult;
                mult = n1*n2;
                printf("A multiplicacao é %d: \n", mult);
            }else{
                if(strcmp(operador,"/") == 0){
                    int div;
                    div = n1/n2;
                    printf("A divisao é %d: \n", div);
                }else{
                    printf("Operacao nao reconhecida \n");
            }
            }
        }
    }



}