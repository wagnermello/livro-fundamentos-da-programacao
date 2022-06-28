/* Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25% */

#include <stdio.h>
#include <stdlib.h>

int main()

{
    float salarioAtual;
    printf("Informe o salário atual: ");
    scanf("%f", &salarioAtual);

    float aumentoSalario = salarioAtual * 1.25;

    printf("O salário com aumento de 25%% ficou: R$ %.2f", aumentoSalario);
}