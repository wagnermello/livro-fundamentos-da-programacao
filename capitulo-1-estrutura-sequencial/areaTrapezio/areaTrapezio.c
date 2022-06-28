/*Faça um programa que calcule e mostre a área de um trapézio
Sabe-se que A = ((base maior + base menor) * altura)/2*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float baseMaior, baseMenor, altura;

    printf("Informe um número para a base maior do trapézio: ");
    scanf("%f", &baseMaior);

    printf("Informe um número para a base menor do trapézio: ");
    scanf("%f", &baseMenor);

    if (baseMaior < baseMenor)
    {
        printf("A base maior não pode ser menor que a base menor. Repita a operação.\n");
        ;
        return main();
    }

    printf("Informe a altura do trapézio: ");
    scanf("%f", &altura);

    float areaTrapezio = ((baseMaior + baseMenor) * altura) / 2;

    printf("A área do trapézio é: %.2f\n", areaTrapezio);

    system("PAUSE");
    return 0;
}