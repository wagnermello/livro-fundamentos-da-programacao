/*Faça um programa que receba um número positivo e maior que zero, calcule e mostre
a) o número digitado ao quadrado
b) o número digitado ao cubo
c) a raíz quadrada do número digitado
d) a raíz cúbica do número digitado*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero;
    printf("Digite um número maior que zero: ");
    scanf("%f", &numero);

    float quadrado = pow(numero, 2);
    float cubo = pow(numero, 3);
    float raizQuadrada = sqrt(numero);
    float raizCubica = pow(numero, 1.0 / 3.0);

    printf("O número %.2f elevado ao quadrado resulta em: %.2f\n", numero, quadrado);
    printf("O número %.2f elevado ao cubo resulta em: %.2f\n", numero, cubo);
    printf("A raíz quadrada do número %.2f resulta em: %.2f\n", numero, raizQuadrada);
    printf("A raíz cúbica do número %.2f resulta em: %.2f\n", numero, raizCubica);

    system("PAUSE");
    return 0;
}