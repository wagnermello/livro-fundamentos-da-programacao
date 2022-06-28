/*Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e mostre:
a) a hora digitada convertida em minutos;
b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
c) o total de minutos convertidos em segundos*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horaDigitada, minutoDigitado;
    printf("Informe um número para a hora: ");
    scanf("%d", &horaDigitada);

    printf("Informe um número para os minutos: ");
    scanf("%d", &minutoDigitado);

    int horaEmMinutos = (horaDigitada * 60) + minutoDigitado;
    int minutosEmSegundos = horaEmMinutos * 60;

    printf("A hora e os minutos digitados totalizam: %d minutos\n", horaEmMinutos);
    printf("A hora e os minutos digitados totalizam: %d segundos\n", minutosEmSegundos);

    system("PAUSE");
    return 0;
}