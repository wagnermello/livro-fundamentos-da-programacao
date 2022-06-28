/*A nota de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas obedece aos pesos a seguir

Trabalho de laboratório = 2
Avaliação semestral = 3
Exame final = 5

Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue a tabela:

8,0 - 10,0    =   A
7,0 - 8,0     =   B
6,0 - 7,0     =   C
5,0 - 6,0     =   D
0,0 - 5,0     =   E
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notaLaboratorio;
    float pesoNotaLaboratiorio = 2;
    printf("Digite a nota do trabalho de laboratório: ");
    scanf("%f", &notaLaboratorio);

    float notaSemestral;
    float pesoNotaSemestral = 3;
    printf("Digite a nota referente à avaliação semestral:  ");
    scanf("%f", &notaSemestral);

    float notaFinal;
    float pesoNotaFinal = 5;
    printf("Digite a nota referente ao exame final: ");
    scanf("%f", &notaFinal);

    if (notaLaboratorio > 10 || notaSemestral > 10 || notaFinal > 10 || notaLaboratorio < 0 || notaSemestral < 0 || notaFinal < 0)
    {
        printf("As notas não podem ser maior que 10.0 ou menor que 0.0\nReinicie a operação.\n");

        return main();
    }
    else
    {

        float media;
        media = ((notaLaboratorio * pesoNotaLaboratiorio) + (notaSemestral * pesoNotaSemestral) + (notaFinal * pesoNotaFinal)) / (pesoNotaLaboratiorio + pesoNotaSemestral + pesoNotaFinal);

        if (media >= 8 && media <= 10)
        {
            printf("Nota A.\n");
        }
        if (media >= 7 && media < 8)
        {
            printf("Nota B.\n");
        }
        if (media >= 6 && media < 7)
        {
            printf("Nota C.\n");
        }
        if (media >= 5 && media < 6)
        {
            printf("Nota D.\n");
        }
        if (media < 5)
        {
            printf("Nota E.\n");
        }
    }
    system("PAUSE");
    return 0;
}