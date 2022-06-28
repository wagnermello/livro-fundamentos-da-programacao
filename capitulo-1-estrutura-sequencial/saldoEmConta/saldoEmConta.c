/*
Um trabalhador recebeu seu salário e depositou em sua conta bancária. Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação bancária de retirada paga CPMF de 0,38% e o saldo inicial da conta está zerado.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float salarioRecebido;
    printf("Informe o valor do salário recebido: R$ ");
    scanf("%f", &salarioRecebido);

    float cheque1;
    printf("Informe o valor do primeiro cheque emitido: R$ ");
    scanf("%f", &cheque1);

    float cheque2;
    printf("Informe o valor do segundo cheque emitido: R$ ");
    scanf("%f", &cheque2);

    float CPMF = 0.38 / 100;

    float saldoAtual = salarioRecebido - (cheque1 + (cheque1 * CPMF)) - (cheque2 + (cheque2 * CPMF));

    printf("O saldo atual da conta é: R$ %.2f", saldoAtual);
}