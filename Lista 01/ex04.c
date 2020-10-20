/*
4.	Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A fórmula de conversão é: C = (F-32)*(5.0/9).

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex04#main.c
*/

/*
planejamento:

declarar as duas variaveis para as temperaturas
exibir solicitação para informar temperatura Fahrenheit
leitura da temperatura Fahrenheit F
calculo da temperatura Celsius C = (F-32)*(5.0/9)
exibicao da temperatura celsius
*/

#include <stdio.h>

int main(void) 
{
    float tempF, tempC;
    printf ("Informe temperatura em Fahrenheit: ");
    scanf ("%f", &tempF);
	tempC = (tempF-32)*(5.0/9.0);
    printf ("Temperatura em Celsius: %.2f °C", tempC);
    return 0;
}