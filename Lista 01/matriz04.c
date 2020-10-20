/*
4) Leia 2 notas de 10 alunos. Não é para ler o Nome. As notas devem ser armazenadas em uma matriz 2D onde a primeira coluna é a nota1, e a segunda coluna a nota2. Em seguida, exiba a tabela. 
a) Adicione uma terceira coluna a sua matriz, e armazene nela a média das 2 notas. Atenção a média deve ser calculada automaticamente pelo seu programa, o usuário não irá digitar a média, apenas as 2 notas.


solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-matriz04#main.c

*/

/*
planejamento:
declarar matriz[10][2] de float para notas;
declara matriz[10][3] de float para notas e medias;
declarar variaveis inteiras para controle de linha e coluna;
estrutura de repeticao para linha (aluno) de posicao 0 ate 9;
	estrutura de repeticao para coluna de posicao 0 ate 1 (notas);
		solicitar numero a ser adicionado na matriz;
		ler numero informado;

estrutura de repeticao para linha (aluno) de posicao 0 ate 9 (10 alunos);
	estrutura de repeticao para coluna de posicao 0 ate 1 (2 notas);
		imprimir elemento matriz de notas [linha][coluna];

estrutura de repeticao para linha de posicao 0 ate 9 (10 alunos);
	estrutura de repeticao para coluna de posicao 0 ate 2 (3 elementos);
		verificar o controlador de coluna esta na posicao 2
			se sim, o elemento de posicao 2 assume a media aritmética da coluna de posicao 0 e 1 da matriz de notas da mesma linha;
			senao, o elemento assume o mesmo valor da matriz de notas de mesma linha e coluna;
	
estrutura de repeticao para linha de posicao 0 ate 9 (10 alunos);
	estrutura de repeticao para coluna de posicao 0 ate 2 (3 elementos);
		IMPRIMIR ELEMENTO DE MATRIZ DE NOTA E MEDIA [LINHA][COLUNA];
*/


#include <stdio.h>


int main(void) 
{
	float notas[10][2];
	float medias[10][3];
	int j,i;

	for (j=0; j<10;j++)
	{
		for (i=0; i<2; i++)
		{
			printf("Digite a #%d nota do #%d aluno: ", (i+1), (j+1));
			scanf("%f", &notas[j][i]);
		}
	}

	printf("\nTABELA DE NOTAS POR ALUNO: \n");
	for (j=0; j<10;j++)
	{
		for (i=0; i<2; i++)
		{
			printf("%.2f ", notas[j][i]);
			//para não imprimir traco apos o ultimo elemento da linha:
			if (i<1)
			{
				printf("- ");
			}
		}
		printf("\n");
	}

	for (j=0; j<10;j++)
	{
		for (i=0; i<3; i++)
		{
			if (i==2)
			{
				medias[j][i]=(notas[j][0]+notas[j][1])/2;
			}
			else
			{
				medias[j][i]=notas[j][i];
			}
		}
	}

	printf("\nTABELA DE NOTAS E MEDIAS POR ALUNO: \n");
	for (j=0; j<10;j++)
	{
		printf("Aluno %d: ", (j+1));
		for (i=0; i<3; i++)
		{
			printf("%.2f ", medias[j][i]);
			//para não imprimir traco apos o ultimo elemento da linha:
			if (i<2)
			{
				printf("- ");
			}
		}
		printf("\n");
	}


    return 0;
}