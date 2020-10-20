/*
3.	Ler duas notas e exibir a média aritmética.

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex03#main.c
*/

/*
planejamento:

declarar as duas variaveis para as notas e uma para o resultado
leitura das notas
calculo da media = (nota1 + nota2)/2
exibicao da media
*/

#include <stdio.h>

int main(void) 
{
    float nota1, nota2, media;
    scanf ("%f", &nota1);
	scanf ("%f", &nota2);
    media = (nota1+nota2)/2;
    printf ("media aritmetica: %f", media);
    return 0;
}