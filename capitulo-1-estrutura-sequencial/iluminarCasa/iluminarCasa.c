/*Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m², deve-se usar 18W de potência. Faça um programa que receba as duas dimensões de um cômodo em metros. Calcule e mostre a sua área em m² e a potência de iluminação que deverá ser utilizada.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float medidaComodo1;
    float medidaComodo2;

    printf("Informe a primeira medida do cômodo (em metros): ");
    scanf("%f", &medidaComodo1);

    printf("Informe a segunda medida do cômodo (em metros): ");
    scanf("%f", &medidaComodo2);

    float metrosQuadrados = medidaComodo1 * medidaComodo2;

    float iluminacao = metrosQuadrados * 18;

    printf("O cômodo tem %.2f m². Precisa-se de %2.fW para iluminar corretamente este cômodo\n", metrosQuadrados, iluminacao);

    system("PAUSE");
    return 0;
}