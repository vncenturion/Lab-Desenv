/*
5.	Ler a altura e a base de um triângulo e calcular sua área. A fórmula de área de um triângulo é A = (base*altura)/2.

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex05#main.c
*/

/*
planejamento:

declarar as duas variaveis para as dimensoes altura e base e uma para a area
leitura das dimensoes
calculo da area pela formula A = (base*altura)/2
exibicao da area
*/

#include <stdio.h>

int main(void) 
{
    float base, altura, area;
    printf ("Informe a altura do triango: ");
    scanf ("%f", &altura);
    printf ("Informe a base do triango: ");
	scanf ("%f", &base);
    area = (base*altura)/2;
    printf ("Area do triangulo de base %.2f e altura %.2f = %.2f unid²", base, altura, area);
    return 0;
}