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