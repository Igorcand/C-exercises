#include <stdio.h>

int main(){
    int n1;
    int n2;

    printf("Digite um numero: \n");
    scanf("%d", &n1);
    fflush(stdin);

    printf("Digite outro numero: \n");
    scanf("%d", &n2);
    fflush(stdin);
    int i;
    if(n1<n2){ //n2 maior que n1
        for(i=n1;i<n2;i++){
            printf("%d ", i);
        }
    }else {
        if(n1==n2){ // iguais
            printf("Valores iguais");
        }else{ //n1 maior que n2
            for(i=n1;i>n2;i--){
                printf("%d ", i);
            }
        }
    }
}