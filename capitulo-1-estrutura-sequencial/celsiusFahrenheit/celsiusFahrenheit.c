/*Faça um programa que receba a temperatura em Celsius, calcule e mostre essa temperatura em Fahrenheit. Sabe-se que F =180*(C + 32)/100*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius;
    float fahrenheit;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9) / 5 + 32;

    printf("A temperatura em graus Fahrenheit é: %2.f°F\n", fahrenheit);

    system("PAUSE");
    return 0;
}