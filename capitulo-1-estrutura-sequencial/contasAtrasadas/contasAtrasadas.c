/*
João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de João.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioRecebido;
    printf("Informe o salário recebido por João: R$ ");
    scanf("%f", &salarioRecebido);

    float conta1, conta2;
    printf("Informe o valor da primeira conta atrasada: R$ ");
    scanf("%f", &conta1);

    printf("Informe o valor da segunda conta atrasada: R$ ");
    scanf("%f", &conta2);

    float contasComJuros = (conta1 + (conta1 * 2 / 100)) + (conta2 + (conta2 * 2 / 100));
    float salarioRestante = salarioRecebido - contasComJuros;

    printf("O restante do salário de João é: R$ %.2f\n", salarioRestante);

    system("PAUSE");
    return 0;
}