/*Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para calcular e mostrar a que distância a escada deve estar da parede. A pessoa deve fornecer o tamanho da escada e a altura em que deseja pregar o quadro.
Lembre-se que o tamanho da escada deve ser maior que a altura que se deseja alcançar */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float tamanhoEscada;
    printf("Digite o tamanho da escada em metros: ");
    scanf("%f", &tamanhoEscada);

    float altura;
    printf("Digite a altura (em metros) em que deseja pregar o quadro: ");
    scanf("%f", &altura);

    if (tamanhoEscada <= altura)
    {
        printf("\n***O tamanho da escada deve ser maior que a altura em que deseja pregar o quadro.***\n\n");
        return main();
    }

    float distancia = sqrt((tamanhoEscada * tamanhoEscada) - (altura * altura));

    printf("\nPara pregar o quadro em uma altura de %.2f metros, a distância que a escada deve estar da parede é de %.2f metros\n", altura, distancia);
}