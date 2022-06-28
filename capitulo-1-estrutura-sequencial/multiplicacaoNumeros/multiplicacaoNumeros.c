/*Faça um programa que receba três números, calcule e mostre a multiplicação desses números*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, numero3;
    int multiplicacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    printf("Digite o terceiro número: ");
    scanf("%d", &numero3);

    multiplicacao = numero1 * numero2 * numero3;

    printf("A multiplicação entre os três números é: %d\n", multiplicacao);

    system("PAUSE");
    return 0;
}