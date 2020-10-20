/*
20.	Criar uma aplicação para ler um nome. Em seguida exiba o nome de três formas diferentes.
a) texto normal, utilizando a máscara de formatação string (%s).
b) caractere a caractere em ordem crescente dos índices (do começo para o fim).
c) caractere a caractere em ordem decrescente dos índices (do fim para o começo).

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex20#main.c

*/

/*
planejamento:
declarar vetor char para string;
declarar variavel inteira para controle de estrutura de repeticao;
solicitar ao usuario inserir nome;
ler nome com GETS(variavel);
imprimir variavel com printf %s;
estrutura de repeticao FOR
	imprimir vetor da variavel da posicao i=0 para posicao do vetor[0];
	impressao caractere por caractere com %c até que apareça '\0';
estrutura de repeticao FO
	imprimir vetor da variavel da posical final i="tamanho da string";
	impressao caractere por caractere com %c até que controle i=0 (posicao inicial 0);
*/

#include <stdio.h>
#include <string.h>

int main(void) 
{
	int i;
	char nome[50] = "\0";

	//PARA FUNCAO GETS
	
	printf("\nDigite o nome: ");
	fflush(stdin);
	/*	
		A função gets permite colocar, na variável que recebe por parâmetro, todos os caracteres introduzidos pelo utilizador. Ao contrário do scanf, essa função não está limitada à leitura de uma única palavra.
	*/
	gets(nome);
	puts("Nome: %s\n", nome);
	
	printf("Nome: ");
	for (i=0; nome[i]!='\0'; i++)
	{
		printf("%c", nome[i]);
	}
	
	printf("\nNome: ");
	for (i=strlen(nome) ; i>=0; i--)
	{
		printf("%c", nome[i]);
	}

	//PARA FUNCAO SCANF	
	printf("\nDigite o nome (palavra unica): ");

	/*	
		Notas sobre a função scanf na leitura de strings:
		•As variáveis que recebem a string NUNCA são precedidas do &.
		•A função scanf realiza apenas a leitura de uma única palavra.
	*/

	scanf("%s", nome);
	fflush(stdin);
	printf("Nome: %s\n", nome);
	
	printf("Nome: ");
	for (i=0; nome[i]!='\0'; i++)
	{
		printf("%c", nome[i]);
	}
	
	printf("\nNome: ");
	for (i=strlen(nome) ; i>=0; i--)
	{
		printf("%c", nome[i]);
	}

	

	return 0;
}