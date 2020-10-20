/*
18.	Ler 10 números a serem digitados pelo usuário e armazená-los em um vetor. 
a) Exibir a quantidade de vezes que o número 3 está presente no vetor.
b) Pergunte ao usuário qual número ele quer pesquisar (no lugar do número 3), e diga quantas vezes este número está presente no vetor.


solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex18#main.c
*/

/*
planejamento:
declarar vetor inteiro com 10 elementos;
declara variavel inteira para pesquisa, contador e para controle de estrutura de repeticao;
criar estrutura de repeticao com condicao de parada apos 10 execucoes
	solicitar numero para usuario
	ler numero do usuario;
	verificar se é igual a 3;
		se sim, somar 1 ao contador;
	incrementar variavel de controle
exibir o numero de vezes que o numero 3 foi encontrado a partir do contador;
solicitar numero para pesquisa do usuario
criar estrutura de repeticao com condicao de parada apos 10 execucoes
	zerar contador;
	verificar se cada um dos numeros do vetor é igual ao numero informado pelo usuario;
		se sim, somar 1 ao contador;
	incrementar variavel de controle
exibir o numero de vezes que o numero informado foi encontrado a partir do contador


*/

#include <stdio.h>

int main(void) 
{
	int vetor[10];
	int i=0, pesquisa=3, cont=0;
	
	//QUESTÃO A
	do
	{
		printf("Digite o #%d numero: ", (i+1));
		scanf("%d", &vetor[i]);
		fflush(stdin);
		if (vetor[i]==pesquisa)
		{
			cont+=1;
		}
		i+=1;
	} while (i<10);

	printf ("\nNumero de vezes que %d foi encontrado = %d\n", pesquisa, cont);

	/*
	for (i=0; i<10; i++)
	{
		printf ("%d ", vetor[i]);
	}
	*/


	//QUESTAO B
	printf ("\nDigite o numero que deseja pesquisar: ");
	scanf ("%d", &pesquisa);

	for (i=0, cont=0; i<10; i++)
	{
		if (vetor[i]==pesquisa)
		{
			cont+=1;
		}
	}

	printf ("Numero de vezes que %d foi encontrado = %d", pesquisa, cont);
  	return 0;
}