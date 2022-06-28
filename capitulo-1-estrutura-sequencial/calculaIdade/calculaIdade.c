/*
Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa
b) quantos anos ela terá em 2050
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoAtual = 2022;
    int anoNascimento;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    int idade = anoAtual - anoNascimento;
    int idadeEm2050 = 2050 - anoAtual + idade;

    printf("A idade é: %d\n", idade);
    printf("A idade em 2050 será: %d\n", idadeEm2050);

    system("PAUSE");
    return 0;
}