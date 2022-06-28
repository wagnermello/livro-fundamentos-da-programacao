/*
Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e mostre o salário a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do salário mínimo;
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
c) o imposto equivale a 3% do salário bruto.
d) o salário a receber equivale ao salário bruto menos o imposto.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horasTrabalhadas;
    printf("Informe o número de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    float salarioMinimo;
    printf("Informe o valor do salário mínimo: R$ ");
    scanf("%f", &salarioMinimo);

    float valorHoraTrabalhada = salarioMinimo / 2;
    float salarioBruto = horasTrabalhadas * valorHoraTrabalhada;
    float imposto = salarioBruto * 3 / 100;
    float salarioAReceber = salarioBruto - imposto;

    printf("O salário a receber será: R$ %.2f\n", salarioAReceber);

    system("PAUSE");
    return 0;
}