/*
3) Gere uma matriz 3x4 de inteiros, e peça para o usuário do programa preenchê-la. 
a) Informe qual foi o maior número encontrado na matriz. 
b) Informe qual foi o menor número encontrado na matriz. 

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-matriz03#main.c

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
		verificar se o elemento da posicao [linha][coluna] é maior que o termo constante na variavel MAIOR;
			SE SIM, substituir o termo;
		senao se verificar se o elemento da posicao [linha][coluna] é menor que o termo constante na variavel MENOR;
			SE SIM, substituir o termo;
exibir os termos menor e maior a partir das variaveis.

*/

#include <stdio.h>

int main(void) 
{

	int matriz[3][4];
	int j,i,maior, menor;

	for (j=0; j<3;j++)
	{
		for (i=0; i<4; i++)
		{
			printf("Digite o #%d elemento da #%d linha: ", (i+1), (j+1));
			scanf("%d", &matriz[j][i]);
		}
	}
	printf("\n");

	//inicialização das variaveis menor e maior
	menor=matriz[0][0];
	maior=matriz[0][0];

	for (j=0; j<3;j++)
	{
		for (i=0; i<4; i++)
		{
			if (matriz[j][i]>maior)
			{
				maior=matriz[j][i];
			}
			else if (matriz[j][i]<menor)
			{
				menor=matriz[j][i];
			}
		}
	}

	printf("\nMaior numero encontrado: %d\nMenor numero encontrado: %d", maior, menor);

    return 0;
}