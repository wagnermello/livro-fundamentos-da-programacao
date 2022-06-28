/*
Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa em anos;
a) a idade dessa pessoa em meses;
a) a idade dessa pessoa em dias;
a) a idade dessa pessoa em semanas;
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoNascimento;
    printf("Informe o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    int anoAtual;
    printf("Informe o ano atual: ");
    scanf("%d", &anoAtual);

    int idadeAnos = anoAtual - anoNascimento;
    int idadeMeses = idadeAnos * 12;
    int idadeDias = idadeAnos * 365;
    int idadeSemanas = idadeAnos * 52;

    printf("A idade em anos é: %d\n", idadeAnos);
    printf("A idade em meses é: %d\n", idadeMeses);
    printf("A idade em dias é: %d\n", idadeDias);
    printf("A idade em semanas é: %d\n", idadeSemanas);
}