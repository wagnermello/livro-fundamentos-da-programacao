/*Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela vai passar por vários paíeses e precisa converter seu dinheiro em dólares, euros e libras esterlina*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float qtdReais;
    printf("Digite a quantidade de dinheiro em reais: ");
    scanf("%f", &qtdReais);

    float cotacaoDolar;
    printf("Informe a cotação de dólar atual: ");
    scanf("%f", &cotacaoDolar);

    float cotacaoEuro;
    printf("Informe a cotação de euro atual: ");
    scanf("%f", &cotacaoEuro);

    float cotacaoLibra;
    printf("Informe a cotação de libra atual: ");
    scanf("%f", &cotacaoLibra);

    float conversaoDolar = qtdReais / cotacaoDolar;
    float conversaoEuro = qtdReais / cotacaoEuro;
    float conversaoLibra = qtdReais / cotacaoLibra;

    printf("O valor de R$ %.2f convertido para dólares é: USD %.2f\n", qtdReais, conversaoDolar);
    printf("O valor de R$ %.2f convertido para euros é: EUR %.2f\n", qtdReais, conversaoEuro);
    printf("O valor de R$ %.2f convertido para libras é: LIB %.2f\n", qtdReais, conversaoLibra);

    system("PAUSE");
    return 0;
}