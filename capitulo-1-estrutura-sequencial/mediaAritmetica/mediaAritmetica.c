/*Faça um programa que receba três notas, calcule e mostre a média aritmética*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1, n2, n3;

    printf("\n\n***MÉDIA ARITMÉTICA DE TRÊS NÚMEROS INTEIROS***\n\n");

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    int mediaAritmetica = (n1 + n2 + n3) / 3;

    printf("A média aritmética dos três números é: %d", mediaAritmetica);
}