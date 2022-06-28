/*Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota1, nota2, nota3;
    float peso1, peso2, peso3;

    printf("\n\n***MÉDIA PONDERADA DE NÚMEROS REAIS***\n\n");

    /*Capturando a primeira nota e seu respectivo peso*/
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite o peso referente à primeira nota: ");
    scanf("%f", &peso1);

    /*Capturando a segunda nota e seu respectivo peso*/
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite o peso referente à segunda nota ");
    scanf("%f", &peso2);

    /*Capturando a terceira nota e seu respectivo peso*/
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite o peso referente à terceira nota: ");
    scanf("%f", &peso3);

    /*Calculando a média ponderada*/
    float mediaPonderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("\nA média ponderada das três notas é: %.2f\n", mediaPonderada);

    system("PAUSE");
    return 0;
}