/*Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:
a) a hora trabalhada vale 1/8 do salário mínimo;
b) a hora extra vale 1/4 do salário mínimo;
c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra
e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horasTrabalhadas;
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    float salarioMinimo;
    printf("Informe o salário mínimo: R$ ");
    scanf("%f", &salarioMinimo);

    float horasExtras;
    printf("Informe a quantidade de horas extras trabalhadas: ");
    scanf("%f", &horasExtras);

    /*===============IMPRIMINDO DADOS===============*/
    float valorHoraTrabalhada = salarioMinimo / 8;
    printf("\n\n\nO valor da hora trabalhada é: R$ %.2f\n", valorHoraTrabalhada);

    float valorHoraExtra = salarioMinimo / 4;
    printf("O valor da hora extra é: R$ %.2f\n", valorHoraExtra);

    float salarioBruto = horasTrabalhadas * valorHoraTrabalhada;
    printf("O valor do salário bruto é: R$ %.2f\n", salarioBruto);

    float valorTotalHorasExtras = horasExtras * valorHoraExtra;
    printf("O valor total das horas extras é é: R$ %.2f\n", valorTotalHorasExtras);

    float salarioAReceber = salarioBruto + valorTotalHorasExtras;
    printf("\n\n\nO salário a receber é: R$ %.2f\n", salarioAReceber);

    system("PAUSE");
    return 0;
}