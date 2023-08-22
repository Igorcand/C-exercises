#include <stdio.h>
#include <string.h> 


int main(){
    int n1;

    printf("Digite um numero: \n");
    scanf("%d", &n1);
    fflush(stdin);

    if(n1==50){
        return 0;
    }

    if(n1<0 || n1>10){
        printf("Erro, digite numeros apenas de 1 a 10 \n");
        return 1;
    }

    int n2;

    printf("Digite outro numero: \n");
    scanf("%d", &n2);
    fflush(stdin);

    if(n2<0 || n2>10){
        printf("Erro, digite numeros apenas de 1 a 10 \n");
        return 1;
    }

    double media;
    media = (n1+n2)/2;
    printf("A media e: %f \n", media);

}