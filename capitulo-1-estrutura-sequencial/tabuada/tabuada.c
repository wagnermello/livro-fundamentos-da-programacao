/*Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
Exemplo:
5x0 = 0
5x1 = 5
5x2 = 10
5x3 = 15
5x4 = 20
5x5 = 25
5x6 = 30
5x7 = 35
5x8 = 40
5x9 = 45
5x10 = 50
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroDigitado;
    printf("Digite um número: ");
    scanf("%d", &numeroDigitado);

    int i;
    int tabuada;

    for (i = 0; i <= 10; i++)
    {
        tabuada = numeroDigitado * i;
        printf("5 x %d = %d\n", i, tabuada);
    }

    system("PAUSE");
    return 0;
}
