/*Faça um programa que calcule que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salários mínimos que esse funcionário ganha*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioMinimo, salarioFuncionario;

    printf("Digite o valor do salário mínimo: R$ ");
    scanf("%f", &salarioMinimo);

    printf("Digite o valor do salário do funcionário: R$ ");
    scanf("%f", &salarioFuncionario);

    float qtdSalariosMinimos = salarioFuncionario / salarioMinimo;

    printf("A quantidade de salários mínimos que o funcionário recebe é %.2f salários mínimos\n", qtdSalariosMinimos);

    system("PAUSE");
    return 0;
}