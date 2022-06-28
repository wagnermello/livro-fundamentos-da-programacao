/* Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus ele terá que subir para atingir o seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas devem estar em metros. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alturaDegrau = 0.3;
    float alturaASerAlcancada;

    printf("Informe a altura que você deseja alcançar, em metros: ");
    scanf("%f", &alturaASerAlcancada);

    float qtdDegraus = alturaASerAlcancada / alturaDegrau;

    printf("Em uma escada na qual os degraus medem 30 centímetros, você deverá subir %.2f degraus para alcançar a altura de %.2f metros", qtdDegraus, alturaASerAlcancada);
}
