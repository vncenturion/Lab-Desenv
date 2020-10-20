/*
17.	Leia dois números inteiros, o primeiro representará a base e o segundo o expoente. Calcule o valor da base elevado ao expoente. Exemplo: 34 = 3*3*3*3 = 81;  53 = 5*5*5 = 125. Em C não existe nenhum operador matemático que calcule o expoente. Desenvolva o seu próprio algoritmo para realizar o cálculo, utilizando um laço de repetição para realizar sucessivas multiplicações.

solucao em:
https://repl.it/@ViniciusB1/LDA-L1-ex17#main.c
*/

/*
planejamento:
declarar variaveis inteiras para base, expoente, resultado e controle de estrutura de repeticao;
fazer leitura de base e expoente;
estrutura de repetição FOR 
	interacoes até o valor do expoente
	a cada interacao o resultado é multiplicao pela base
exibir resultado
*/

#include <stdio.h>


int main(void) 
{
	
	int base, expoente, resultado=1, i;
	printf("Digite base e o expoente (base**expoente): ");
	scanf("%d**%d", &base, &expoente);

	for (i=1; i<=expoente; i++)
	{
		resultado=resultado*base;
	}

	printf("%d**%d = %d", base, expoente, resultado);

    
    return 0;
}