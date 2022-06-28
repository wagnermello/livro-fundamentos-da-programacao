/*
Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) O novo peso, se a pessoa engordar 15% sobre o peso digitado.
b) O novo peso, se a pessoa emagrecer 20% sobre o peso digitado.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pesoAtual;
    printf("Digite o peso atual em quilos: ");
    scanf("%f", &pesoAtual);

    float maisQuinzePorcento = pesoAtual + (pesoAtual * 15 / 100);
    float menosVintePorcento = pesoAtual - (pesoAtual * 20 / 100);

    printf("Se a pessoa engordar 15%%, o peso será: %.2f kg\n", maisQuinzePorcento);
    printf("Se a pessoa emagrecer 20%%, o peso será: %.2f kg\n", menosVintePorcento);

    system("PAUSE");
    return 0;
}