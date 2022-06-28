/*Faça um programa que leia a área de um losango. Sabe-se que A = (diagonal maior * diagonal menor)/2*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diagonalMaior, diagonalMenor;

    printf("Informe a diagonal maior do losango: ");
    scanf("%f", &diagonalMaior);

    printf("Informe a diagonal menor do losango: ");
    scanf("%f", &diagonalMenor);

    if (diagonalMaior < diagonalMenor)
    {
        printf("A diagonal maior não pode ser menor que a diagonal menor. Reinicie a operação.\n");
        return main();
    }

    float areaLosango = (diagonalMaior * diagonalMenor) / 2;

    printf("A área do losango é: %.2f\n", areaLosango);
}