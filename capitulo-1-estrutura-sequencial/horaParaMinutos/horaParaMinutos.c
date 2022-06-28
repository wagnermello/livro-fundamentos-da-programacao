/*
Faça um programa que receba uma hora formada por hora e minutos (um número real), calcule e mostre a hora digitada apenas em números, lembre-se que:
a) para quatro e meia, deve-se digitar: 4.30;
b) os minutos vão de 0 a 59;
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float horaDigitada;
    printf("Digite a hora e minutos no formato real (00.00): ");
    scanf("%f", &horaDigitada);

    int hora = horaDigitada;
    float horaEmMinutos = (hora * 60) + 1;

    float minutos = (horaDigitada - hora) * 100;

    int totalMinutos = horaEmMinutos + minutos;

    printf("A hora digitada em minutos é: %d minutos\n", totalMinutos);

    system("PAUSE");
    return 0;
}