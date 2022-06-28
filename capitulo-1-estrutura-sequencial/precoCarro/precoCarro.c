/*
O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:

a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo;

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoDeFabrica;
    printf("Digite o preço de fábrica do veículo: R$ ");
    scanf("%f", &precoDeFabrica);

    float percentualLucro;
    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f", &percentualLucro);

    float percentualImpostos;
    printf("Digite o percentual de impostos: ");
    scanf("%f", &percentualImpostos);

    float valorLucro = precoDeFabrica * (percentualLucro / 100);
    float valorImposto = precoDeFabrica * (percentualImpostos / 100);
    float precoFinalVeiculo = precoDeFabrica + valorLucro + valorImposto;

    printf("O valor correspondente ao lucro do distribuidor é: R$ %.2f\n", valorLucro);
    printf("O valor correspondente aos impostos é: R$ %.2f\n", valorImposto);
    printf("O preço final do veículo é: R$ %.2f\n", precoFinalVeiculo);

    system("PAUSE");
    return 0;
}