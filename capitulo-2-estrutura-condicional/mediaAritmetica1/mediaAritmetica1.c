/*
Faça um programa que receba três notas de um aluno, calcule e mostre a  média aritmética e a mensagem constante na tabela a seguir.

0.0 --- 3.0 --- Reprovado
3.0 --- 7.0 --- Exame
7.0 --- 10.0 --- Aprovado

*/

#include <stdio.h>
#include <stdlib.h>

void validaNota(float nota)
{
    if (nota < 0 || nota > 10 || !nota)
    {
        printf("A nota digitada não deve ser menor que zero, maior que 10 e deve ser um número.\n");
        printf("Repita a operação\n");
        return main();
    }
}

int main()
{

    float nota1, nota2, nota3;

    printf("Digite o valor da primeira nota: ");
    scanf("%f", &nota1);
    validaNota(nota1);

    printf("Digite o valor da segunda nota: ");
    scanf("%f", &nota2);
    validaNota(nota2);

    printf("Digite o valor da terceira nota: ");
    scanf("%f", &nota3);
    validaNota(nota3);

    float media = (nota1 + nota2 + nota3) / 3;

    if (media < 3)
    {
        printf("Média: %2.f. Aluno reprovado.\n", media);
    }
    else if (media >= 3 && media <= 7)
    {
        printf("Média: %2.f. Aluno pegou exame.\n", media);
    }
    else if (media >= 7 && media <= 10)
    {
        printf("Média: %2.f. Aluno aprovado.\n", media);
    }

    system("PAUSE");
    return 0;
}
