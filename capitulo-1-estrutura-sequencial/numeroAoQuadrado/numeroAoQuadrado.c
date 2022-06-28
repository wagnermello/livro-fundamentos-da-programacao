/*Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float numero1, numero2;
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    float potencia1 = pow(numero1, numero2);
    float potencia2 = pow(numero2, numero1);

    printf("O número %.2f elevado ao número %.2f resulta em: %.2f\n", numero1, numero2, potencia1);
    printf("O número %.2f elevado ao número %.2f resulta em: %.2f\n", numero2, numero1, potencia2);
}