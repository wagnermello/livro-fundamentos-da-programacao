/* Faça um programa que calcule e mostre a área de um círculo. Sábe-se que Área = π * R²  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float raio;
    float pi = 3.141592;

    /* Capturando dados */
    printf("\nInforme o valor do raio do círculo: ");
    scanf("%f", &raio);

    /* Calculando área */
    float areaCirculo = pi * (pow(raio, 2));

    /* Imprimindo o resultado */
    printf("A área do círculo é: %.4f\n", areaCirculo);

    system("PAUSE");
    return 0;
}