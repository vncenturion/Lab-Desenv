/*
2) Gere uma matriz 3x4 de inteiros, e peça para o usuário do programa preenchê-la. 
Informe a quantidade de vezes que o número 5 foi digitado. 

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-matriz02#main.c

*/

/*
planejamento:
declarar matriz[3][4] de inteiros;
declarar variaveis inteiras para controle de linha e coluna e para contador;
estrutura de repeticao para linha de posicao 0 ate 2;
	estrutura de repeticao para coluna de posicao 0 ate 3;
		solicitar numero a ser adicionado na matriz;
		ler numero informado;

inicializar variaveis menor e maior com o primeiro elemento da matriz;
estrutura de repeticao para linha de posicao 0 ate 2;
	estrutura de repeticao para coluna de posicao 0 ate 3;
		verificar se o elemento da posicao [linha][coluna] é igual a 5;
			se sim, contador é incrementado; 
exibir os numero de termos iguais a 5 a partir do contador declarado.

*/


#include <stdio.h>


int main(void) 
{

	int matriz[3][4];
	int j,i,contador=0;

	for (j=0; j<3;j++)
	{
		for (i=0; i<4; i++)
		{
			printf("Digite o #%d elemento da #%d linha: ", (i+1), (j+1));
			scanf("%d", &matriz[j][i]);
		}
	}
	printf("\n");

	
	for (j=0; j<3;j++)
	{
		for (i=0; i<4; i++)
		{
			if (matriz[j][i]==5)
			{
				contador+=1;
			}
		}
	}

	printf("Numero de vezes que o numero 5 foi encontrado = %d", contador);

    return 0;
}