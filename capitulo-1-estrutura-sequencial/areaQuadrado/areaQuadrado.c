/*Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que A = lado*lado*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ladoQuadrado;
    printf("Informe a medida do lado do quadrado: ");
    scanf("%f", &ladoQuadrado);

    float areaQuadrado = ladoQuadrado * ladoQuadrado;

    printf("A área do quadrado é: %2.f\n", areaQuadrado);

    system("PAUSE");
    return 0;
}