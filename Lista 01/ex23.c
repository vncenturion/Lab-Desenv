/*
23.	Leia o nome completo de uma pessoa (nome /  nome do meio / sobrenome) de uma vez só. Em seguida, exiba, cada uma das palavras do nome em linhas diferentes, mas de trás para frente. 
Ex.: João da Silva Cavalcanti. 
Cavalcanti 
Silva 
da 
João

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex23#main.c
*/

/*
planejamento:
declarar string pre dimensionada para 100 caracteres e inicializada com '\0';
declara variaveis int j, i, e aux para controle de estruturas de repeticao;
solicita nome completo ao usuario;
leitura do nome completo por gets associado a string;
estrutura de repeticao inicializando i na posição do tamanho da string (marcado por strlen. requer biblioteca string.h) fazendo decremento da variavel de controle 'i' ate que atinja a posicao 0;
	estrutura condicional se para buscar o caractere ' ' (space);
		se encontrar, imprime todos os caracteres posteriores atraves de estrutura de repeticao controlada pela variavel j que recebe como inicializacao a posicao seguinte a varivel i que contem o space e finalização na variavel aux;
		apos a estrutura de repeticao para imprimir, a variavel auxiliar aux recebe a posicao i que marcava o caractere space;
estrutura de repeticao para imprimir a primeira parte do nome inicializada por i=0; e finalizando com a ultima variavel aux;
	imprime caractereres um a um até chergar na variavel aux que corresponde ao space.
*/


#include <stdio.h>
#include <string.h>

int main(void) 
{
	int i=0, j=0, aux=0;
	char nome[100] = "Maria da Silva Melo";
	int posica[100];
	printf("Digite o nome completo: ");
	gets(nome);

	//imprime nomes após (space)
	for (i=strlen(nome), aux=strlen(nome); i>=0; i--)
	{
		if (nome[i]==' ')
		{
			//puts("entrou no else");
			j=i+1;
			while (j!=aux)
			{
				printf("%c", nome[j]);
				j+=1;
			}
			puts("");
			aux=i;//marca proxima exibicao para finalizar no espaco encontrado.
		}
		
	}
	//imprime primeiro nome
	while (i!=aux)
	{
		printf("%c", nome[i]);
		i+=1;
	}

  	return 0;
}