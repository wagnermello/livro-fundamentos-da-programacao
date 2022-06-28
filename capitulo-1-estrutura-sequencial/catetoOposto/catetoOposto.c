/*Faça um programa que receba a medida de um ângulo formado por uma escada apoiada no chão e a distância que essa escada está da parede, calcule e mostre a medida da escada para que se possa alcançar a sua ponta.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float medidaAngulo;

    printf("Digite a medida do ângulo: ");
    scanf("%f", &medidaAngulo);

    float catetoAdjacente;

    printf("Digite a medida do cateto adjacente: ");
    scanf("%f", &catetoAdjacente);

    float tangenteVinteGraus = 0.3640;

    float catetoOposto = tangenteVinteGraus * catetoAdjacente;

    printf("O valor do cateto oposto é: %.2f\n", catetoOposto);

    system("PAUSE");
    return 0;
}