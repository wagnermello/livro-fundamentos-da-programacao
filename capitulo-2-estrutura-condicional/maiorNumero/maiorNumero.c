/*Faça um programa que receba dois números e mostre o maior*/

#include <stdio.h>
#include <stdlib.h>

void comparaNumero(int numero1, int numero2)
{
    if (numero1 > numero2)
    {
        printf("O primeiro número é maior que o segundo número.\n");
    }
    else
    {
        printf("O segundo número é maior que o primeiro número.\n");
    }
}

int main()
{
    int numero1;
    int numero2;

    printf("Digite primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    comparaNumero(numero1, numero2);

    system("PAUSE");
    return 0;
}