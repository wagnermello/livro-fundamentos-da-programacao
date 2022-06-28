/*Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoProduto;
    printf("Digite o preço do produto: R$ ");
    scanf("%f", &precoProduto);

    float descontoDezPorcento = precoProduto - (precoProduto * 10 / 100);

    printf("O novo preço do produto com 10%% de desconto é: R$ %.2f\n", descontoDezPorcento);

    system("PAUSE");
    return 0;
}