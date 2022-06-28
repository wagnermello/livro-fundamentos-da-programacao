/*
Faça um programa que receba um número real, encontre e mostre:
a) a parte inteira desse número;
b) a parte fracionária desse número;
c) o arredondamento desse número;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main()
{
    float numeroReal;
    printf("Informe um número real: ");
    scanf("%f", &numeroReal);

    int parteInteira = numeroReal;
    float parteFracionaria = numeroReal - parteInteira;
    float arredondamento = round(numeroReal);
    int arredondamentoInt = arredondamento;

    printf("A parte inteira desse número é: %d\n", parteInteira);
    printf("A parte fracionária desse número é: %.2f\n", parteFracionaria);
    printf("O arredondamento desse número é: %d\n", arredondamentoInt);

    system("PAUSE");
    return 0;
}