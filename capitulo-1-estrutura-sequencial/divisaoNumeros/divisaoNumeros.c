/*Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo. Sabe-se que o segundo número não pode ser zero, portanto não é necessário se preocupar com validações.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;
    int divisao;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número ");
    scanf("%d", &numero2);

    if (numero2 <= 0)
    {
        printf("O segundo número não pode ser negativo e nem zero. Repita a operação.\n");
        return main();
    }

    divisao = numero1 / numero2;

    printf("A divisão de %d por %d é: %d\n", numero1, numero2, divisao);

    system("PAUSE");
    return 0;
}