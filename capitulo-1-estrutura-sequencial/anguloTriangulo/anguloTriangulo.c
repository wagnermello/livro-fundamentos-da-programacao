/*Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do terceiro ângulo. Sabe-se que a soma dos ângulos do triângulo é: 180 graus*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float angulo1, angulo2;

    printf("Digite a medida do ângulo 1: ");
    scanf("%f", &angulo1);

    printf("Digite a medida do ângulo 2: ");
    scanf("%f", &angulo2);

    if (angulo1 + angulo2 > 179)
    {
        printf("A soma dos dois ângulos informados não pode ser maior que 179°. Repita a operação\n");
        return main();
    }

    float angulo3 = 180 - (angulo1 + angulo2);

    printf("A medida do terceiro ângulo é: %.2f\n", angulo3);

    system("PAUSE");
    return 0;
}