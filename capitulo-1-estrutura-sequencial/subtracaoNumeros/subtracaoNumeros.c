/*Faça um programa que receba dois números. calcule e mostre a subtração do primeiro número pelo segundo número*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;

    printf("Digte o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digte o segundo número: ");
    scanf("%d", &numero2);

    int subtracao = numero1 - numero2;

    printf("A subtração do primeiro número pelo segundo é: %d\n", subtracao);

    system("PAUSE");
    return 0;
}