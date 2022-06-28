/*
Faça um programa que receba o raio, calcule e mostre:
O comprimento da esfera; sabe-se que C = 2 * πR;
A área da esfera; sabe-se que A = πR²;
O volume da esfera; sabe-se que V = 3/4 * πR³;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float raio;
    printf("Informe a medida do raio da esfera: ");
    scanf("%f", &raio);

    float pi = 3.141592;
    float comprimentoEsfera = 2 * (pi * raio);
    float areaEsfera = pi * pow(raio, 2);
    float volumeEsfera = ((pi * pow(raio, 3)) * 4) / 3;

    printf("O comprimento da esfera é: %.2f\n", comprimentoEsfera);
    printf("A área da esfera é: %.2f\n", areaEsfera);
    printf("O volume da esfera é: %.2f\n", volumeEsfera);
}
