/*
Sabe-se que:
1 pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1.760 jarda

Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados:

a) polegadas
b) jardas
c) milhas
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float pe;
    printf("Digite um número para a medida em pés: ");
    scanf("%f", &pe);

    float polegadas = pe * 12;
    float jardas = pe * 3;
    float milhas = jardas * 1.760;

    printf("O número digitado em polegadas é: %.2f\n", polegadas);
    printf("O número digitado em jardas é: %.2f\n", jardas);
    printf("O número digitado em milhas é: %.2f\n", milhas);

    system("PAUSE");
    return 0;
}