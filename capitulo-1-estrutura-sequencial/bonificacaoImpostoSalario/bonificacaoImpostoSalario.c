/* Faça um programa que calcule o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salarioBase;
    /*Capturando o salário base*/
    printf("Digite o salário base: ");
    scanf("%f", &salarioBase);

    float valorBonificacao = salarioBase * 5 / 100;
    float valorImposto = salarioBase * 7 / 100;
    float salarioAReceber = salarioBase + valorBonificacao - valorImposto;

    printf("\nO salário base é: R$ %.2f\n\n", salarioBase);
    printf("O valor da bonificação é: R$ %.2f\n", valorBonificacao);
    printf("O valor do imposto é: R$ %.2f\n", valorImposto);
    printf("O salário a receber é: R$ %.2f\n\n", salarioAReceber);

    system("PAUSE");
    return 0;
}