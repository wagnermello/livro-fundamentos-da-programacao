/*Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no chão e encostada na parede e a altura da parede onde está a ponta da escada. Calcule e mostre a medida dessa escada.
Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham com medidas de ângulos em radianos*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float angulo;
    printf("Digite a medida do ângulo em graus: ");
    scanf("%f", &angulo);

    float altura;
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    float radiano = angulo * 3.14 / 180; // seno

    float medidaEscada = altura / radiano;

    printf("A medida da escada é: %.2f metros.\n", medidaEscada);

    system("PAUSE");
    return 0;
}