/*Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que Área = (base*altura)/2 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int baseTriangulo;
    int alturaTriangulo;

    /* Capturando dados */
    printf("Informe o valor inteiro para a base do triângulo: ");
    scanf("%d", &baseTriangulo);
    printf("Informe o valor inteiro para a altura do triângulo: ");
    scanf("%d", &alturaTriangulo);

    /* Calculando a área do triângulo */
    int areaTriangulo = (baseTriangulo * alturaTriangulo) / 2;

    /* Imprimindo resultado */
    printf("A área do triângulo é: %d\n", areaTriangulo);

    system("PAUSE");
    return 0;
}