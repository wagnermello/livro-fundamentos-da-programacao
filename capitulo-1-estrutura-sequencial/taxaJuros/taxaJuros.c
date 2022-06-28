/*Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do renimento.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Capturando o valor do depósito*/
    float valorDeposito;
    printf("Digite o valor do depósito em R$: ");
    scanf("%f", &valorDeposito);

    /*Capturando o valor da taxa de juros*/
    float taxaJuros;
    printf("Digite o valor da taxa de juros em R$: ");
    scanf("%f", &taxaJuros);

    /*Calculando o valor do rendimento*/
    float valorRendimento = valorDeposito * taxaJuros / 100;

    /*Calulando o valor total*/
    float valorTotal = valorDeposito + valorRendimento;

    printf("\nO valor de depósito é: R$ %.2f\n", valorDeposito);
    printf("O valor do rendimento é: R$ %.2f\n", valorRendimento);
    printf("O valor total somando o rendimento é: R$ %.2f\n", valorTotal);

    system("PAUSE");
    return 0;
}