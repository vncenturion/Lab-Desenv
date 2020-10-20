/*
22.	Leia o nome completo de uma pessoa (nome /  nome do meio  / sobrenome) de uma vez só. Em seguida, exiba cada uma das palavras do nome em linhas diferentes.
Ex.: João da Silva Cavalcanti. 
João 
da 
Silva 
Cavalcanti 


solucao em:
https://repl.it/@ViniciusB1/LDA-L1-ex22

*/

/*
planejamento:
declarar vetor CHAR[100] para comportar nome;
declarar variavel int para controle da estrutura de repeticao para imprimir o nome;
solicitar nome completo do usuario;
estrutura de repeticao FOR até que seja encontrado caractere '\0' (null)
	iniciar impressao dos caracteres um a um até quer seja encontrado o caractere ' ' (espaco);
	estrutura condicional para imprimir caractere '\n' (new line) caso seja encontrado o caractere espaço;
	retomar a impressao do caractere seguinte;
fim do programa
*/


#include <stdio.h>
#include <string.h>

int main(void) 
{
	int i;
	char nome[100] = "\0" ;
	printf("Digite o nome completo: ");
	gets(nome);

	for (i=0; nome[i]!='\0'; i++)
	{
		if (nome[i]!=' ')
		{
			printf("%c", nome[i]);
		}
		else
		{
			printf("\n");
		}
	}
  return 0;
}