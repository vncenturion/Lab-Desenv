/*
7.	Para ler um número inteiro e dizer se ele é impar ou par.

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex07#main.c
*/

/*
planejamento:

declar variavel para numero inteiro;
leitura do numero fornecido;
verificar se é par (divisivel por dois):
	resto da divisao por 2 deve ser zero
	caso afirmativo: par
	caso negativo: impar
exibir mensagem
*/

#include <stdio.h>

int main(void) 
{
	int numero;
	scanf ("%d", &numero);
	if (numero%2==0)
	{
		printf ("Numero %d e par", numero);
	}
	else
	{
		printf ("Numero %d e impar", numero);
	}

	return 0;
}