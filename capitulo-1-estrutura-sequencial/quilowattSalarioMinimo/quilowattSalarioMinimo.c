/*
Sabe-se que o quilowatt de energia custa um quinto do salário mínimo.Faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. Calcule e mostre:
a) valor de cada quilowatt;
b) valor a ser pago pela residência;
c) valor a ser pago com desconto de 15%;
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioMinimo;
    printf("Informe o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);

    float qtdQuiloWatt;
    printf("Informe o a quantidade de quilowatts consumida :");
    scanf("%f", &qtdQuiloWatt);

    float valorQuiloWatt = salarioMinimo / 5;
    float valorAPagar = qtdQuiloWatt * valorQuiloWatt;
    float valorQuinzePorcento = valorAPagar - (valorAPagar * 15 / 100);

    printf("O valor de cada quilowatt é: R$ %.2f\n", valorQuiloWatt);
    printf("Valor a ser pago pela residência: R$ %.2f\n", valorAPagar);
    printf("Valor a ser pago com 15%% de desconto: R$ %.2f\n", valorQuinzePorcento);

    system("PAUSE");
    return 0;
}