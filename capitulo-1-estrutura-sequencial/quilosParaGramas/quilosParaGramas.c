/*Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quilos;
    printf("Digite o peso em quilos: ");
    scanf("%f", &quilos);

    float gramas = quilos * 1000;
    int gramasInt = gramas;

    printf("O peso em gramas é: %dg\n", gramasInt);

    system("PAUSE");
    return 0;
}