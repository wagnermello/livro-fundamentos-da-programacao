/*Pedro comprou um saco de ração com peso em quilos. Ele possui doi gatos, para os quais fornece a quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para cada gato, calcule e mostre quanto restará de ração no saco após cico dias */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float pesoSacoRacaoQuilos;
    printf("Digite o peso do saco de ração em quilos: ");
    scanf("%f", &pesoSacoRacaoQuilos);

    float qtdDiaria1Gato;
    printf("Digite a quantidade de ração fornecida para cada gato por dia, em gramas: ");
    scanf("%f", &qtdDiaria1Gato);

    float pesoSacoRacaoGramas = pesoSacoRacaoQuilos * 1000;
    float qtdDiaria2Gatos = qtdDiaria1Gato * 2;
    float pesoRestanteRacaoGramas = pesoSacoRacaoGramas - (qtdDiaria2Gatos * 5);
    float pesoRestanteRacaoQuilos = pesoRestanteRacaoGramas / 1000;

    printf("Após 5 dias, o saco de ração terá %.2f quilo(s) de ração\n", pesoRestanteRacaoQuilos);

    system("PAUSE");
    return 0;
}