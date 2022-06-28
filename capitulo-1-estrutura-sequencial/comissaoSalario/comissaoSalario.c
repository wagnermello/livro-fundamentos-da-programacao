/*Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa que receba o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e seu salário final.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioFixo, valorVendas;

    printf("Informe o valor do salário fixo: R$ ");
    scanf("%f", &salarioFixo);

    printf("Informe o valor das vendas: R$ ");
    scanf("%f", &valorVendas);

    float comissaoVendas = valorVendas * 4 / 100;

    float salarioFinal = salarioFixo + comissaoVendas;

    printf("O salário final, com a comissão de 4%% sobre as vendas é: %.2f\n", salarioFinal);

    system("PAUSE");
    return 0;
}