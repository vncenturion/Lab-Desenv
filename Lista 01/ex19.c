/*
19.	Ler 10 números a serem digitados pelo usuário e armazená-los em um vetor.
a) Diga qual é o maior dos 10 números.
b) Diga qual é o menor dos 10 números.

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex19#main.c

*/

/*
planejamento:
declarar vetor inteiro com 10 posicoes;
declarar variavel inteira para maior, menor e controle de estrutura de repeticao;

solicitar 1 numero do usuario;
ler 1 numero do usuario;
maior e menor recebem o primeiro numero;

estrutura de repeticao com inicio na 2 posicao e parada apos 10 posicao;
	solicitar numero para usuario
	ler numero;
		verificar se o numero é maior que aquele que consta na variavel maior;
			se sim, substituir o numero existente;
		verificar se o numero é menor que aquele que consta na variavel menor;
			se sim, substituir o numero existente;

exibir o maior numero e o menor numero a partir das variaveis maior e menor declaradas;


*/


#include <stdio.h>

int main(void) 
{
	int numeros[10];
	int i=0, maior, menor;

	printf("Digite o #%d numero: ", (i+1));
	scanf("%d", &numeros[i]);
	fflush(stdin);
	maior=numeros[i];
	menor=numeros[i];
	
	for (i=1; i<10; i++)
	{
		printf("Digite o #%d numero: ", (i+1));
		scanf("%d", &numeros[i]);
		fflush(stdin);
		if (numeros[i]>maior)
		{
			maior=numeros[i];
		}
		else if (numeros[i]<menor)
		{
			menor=numeros[i];
		}
	}
	
	/* apenas para conferir vetor
	printf(vetor numeros: );
	for (i=0; i<10; i++)
	{
		printf("%d ", numeros[i]);
	}
	*/

	printf ("\nMaior numero digitado: %d\nMenor numero digitado: %d", maior, menor);

    return 0;
}