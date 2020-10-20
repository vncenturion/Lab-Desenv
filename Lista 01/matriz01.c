/*
1) Gere uma matriz 3x4 de inteiros, e peça para o usuário do programa preenchê-la: 
Em seguida exiba-a separando os elementos da mesma linha por “-” (traço) e separando as linhas por nova linha.

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-matriz01#main.c

*/

/*
planejamento:
declarar matriz[3][4] de inteiros;
declarar variaveis inteiras para controle de linha e coluna e para receber maior numero e menor numero;
estrutura de repeticao para linha de posicao 0 ate 2;
	estrutura de repeticao para coluna de posicao 0 ate 3;
		solicitar numero a ser adicionado na matriz;
		ler numero informado;

inicializar variaveis menor e maior com o primeiro elemento da matriz;
estrutura de repeticao para linha de posicao 0 ate 2;
	estrutura de repeticao para coluna de posicao 0 ate 3;
		imprimir elemento da matriz[linha][coluna] com a mascara %d
		verificar de o elemento da matriz esta na posicao menor que a coluna 3
			se sim, imprimir " - ";
	imprimir '\n' (nova linha);

exibir os termos menor e maior a partir das variaveis.
*/


#include <stdio.h>


int main(void) 
{

	int matriz[3][4];
	int j,i;

	for (j=0; j<3;j++)
	{
		for (i=0; i<4; i++)
		{
			printf("Digite o #%d elemento da #%d linha: ", (i+1), (j+1));
			scanf("%d", &matriz[j][i]);
		}
	}
	printf("\n");
	//imprime matriz
	for (j=0; j<3;j++)
	{
		for (i=0; i<4; i++)
		{
			printf("%d ", matriz[j][i]);
			//para não imprimir traco apos o ultimo elemento da linha:
			if (i<3)
			{
				printf("- ");
			}
		}
		printf("\n");
	}

    return 0;
}