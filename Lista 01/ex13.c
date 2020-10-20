/*
13.	Exiba todos os números entre 32 e 126. Exiba um número por linha, mas em cada linha mostre o número em três formatos: inteiro (%d), hexadecimal (%x), e caractere (%c). Utilize a estrutura de repetição for na resolução do problema. Compare o resultado com a tabela ascii abaixo.

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex13#main.c
*/

/*
planejamento:
declarar variavel inteira numero
estrutura de repeticao de 32 a 126
	considerar-se-ão na exibicao os numero 3 e 126 (intervalo fechado) que correspondem aos Sinais Gráficos (imprimíveis) da tabele ASCII
	exibe numero com mascaras de inteiro, hexadecimal e caractere
*/

#include <stdio.h>


int main(void) 
{
	int numero;

	for (numero = 32; numero <= 126; numero++)
	{
		printf ("int %d, hex %x, char %c.\n", numero, numero, numero);
	}

    
    return 0;
}