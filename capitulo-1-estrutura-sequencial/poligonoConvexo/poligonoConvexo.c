/*Faça um programa que receba o número dos lados de um polígono convexo, calcule e mostre o número de diagonais desse polígono. Sabe-se que ND = N * (N - 3)/2, em que N é o número de lados do polígono*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroDeLados;
    printf("Digite o número de lados de um polígono convexo: ");
    scanf("%d", &numeroDeLados);

    int numeroDiagonais = (numeroDeLados * (numeroDeLados - 3)) / 2;

    printf("O número de diagonais é: %d\n", numeroDiagonais);

    system("PAUSE");
    return 0;
}