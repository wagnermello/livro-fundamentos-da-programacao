/* Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber, sabendo que o funcionário tem gratificação de R$ 50,00 e paga imposto de 10% sobre o salário base. */

#include <stdio.h>
#include <stdlib.h>

int main()

{
    /*Capturando o salário base*/
    float salarioBase;
    printf("Informe o salário: ");
    scanf("%f", &salarioBase);

    float bonificacao = 50;

    /*Calculando o imposto*/
    float imposto = salarioBase * 10 / 100;

    float salarioAReceber = salarioBase + bonificacao - imposto;

    printf("O salário base é: R$ %.2f\n", salarioBase);
    printf("O salário com bonificação é: R$ %.2f\n", salarioBase + bonificacao);
    printf("O salário a receber, descontanto o imposto de 10%% é: R$ %.2f\n", salarioAReceber);

    system("PAUSE");
    return 0;
}
