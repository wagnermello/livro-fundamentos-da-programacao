/*Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas duas notas, considerando peso 2 para a primeira e peso 3 para a segunda.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, mediaPonderada;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    mediaPonderada = ((nota1 * 2) + (nota2 * 3)) / 5;

    printf("A média ponderada é: %.2f\n", mediaPonderada);

    system("PAUSE");
    return 0;
}