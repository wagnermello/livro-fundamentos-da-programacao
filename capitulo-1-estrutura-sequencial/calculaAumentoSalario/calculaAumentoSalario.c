/* Faça um programa que receba o salário de um funcionário e o percentual de aumento. Calcule e mostre o valor do aumento e o novo salário */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("Informe o valor do salário: ");
    scanf("%f", &salario);

    float percentualAumento;
    printf("Informe o percentual de aumento: ");
    scanf("%f", &percentualAumento);

    percentualAumento = salario * (percentualAumento / 100);
    float novoSalario = salario + percentualAumento;
    float valorAumento = novoSalario - salario;

    printf("\nO valor de aumento ficou: R$ %.2f\n", valorAumento);
    printf("O novo salário com aumento de %.2f%% ficou: R$ %.2f\n\n", percentualAumento, novoSalario);

    system("PAUSE");
    return 0;
}