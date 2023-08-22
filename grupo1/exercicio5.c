#include <math.h>
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
    int soma;
    soma = n1+n2;
    printf("A soma dos numeros é: %d \n", soma);

    int formula_b;
    formula_b = n1* (pow(n2, 2));

    printf("O produto do primeiro número pelo quadrado do segundo é: %d \n", formula_b);

    printf("O quadrado do primeiro número é: %f \n", pow(n1, 2));

    double raiz_quadrada;
    double quadrado_n1;
    double quadrado_n2;

    quadrado_n1 = pow(n1,2);
    quadrado_n2 = pow(n2,2);

    
    raiz_quadrada = sqrt(quadrado_n1+quadrado_n2);
    printf("A raiz quadrada da soma dos quadrados é: %f \n", raiz_quadrada);



}