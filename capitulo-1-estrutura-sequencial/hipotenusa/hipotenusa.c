/*Faça um programa que receba os catetos de um triângulo retângulo, calcule e mostre o valor da hipotenusa*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float catetoOposto, catetoAdjacente, hipotenusa;

    printf("Informe a medida do cateto oposto: ");
    scanf("%f", &catetoOposto);

    printf("Informe a medida do cateto adjacente: ");
    scanf("%f", &catetoAdjacente);

    hipotenusa = sqrt(pow(catetoOposto, 2) + pow(catetoAdjacente, 2));

    printf("A hipotenusa é: %.2f\n", hipotenusa);

    system("PAUSE");
    return 0;
}