/*
21.	Converter um texto para maiúsculo, de depois para minúsculo. Utilize as funções toupper, e tolower. 

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex21#main.c

*/

/*
planejamento:
FUNCOES TOUPPER/TOLOWER necessitam inclusao da biblioteca <CTYPE.H>
declarar vetor CHAR inicializado e pre dimensionado para receber a palavra;
declarar variavel inteira para controle de estrutura de repeticao utilizada para exibição dos caracteres um a um.
solicitar palavra ao usuario;
estrutura de repeticao FOR até que seja encontrado caractere NULL;
	exibe caractere '%c' um a um depois de formata-lo com TOUPPER;
estrutura de repeticao FOR até que seja encontrado caractere NULL;
	exibe caractere '%c' um a um depois de formata-lo com TOLOWER;
fim
*/


#include <stdio.h>
#include <ctype.h>

int main(void) 
{
	char palavra[100]="\0";
	int i=0;
	
	printf("Digite uma palavra: ");
	gets(palavra);

	puts("MAIUSCULO:");
	for (i=0; palavra[i]!='\0'; i++)
	{
		printf("%c", toupper(palavra[i]));
		/*
		function <cctype> toupper 
		int toupper ( int c );
		Convert lowercase letter to uppercase
		Converts c to its uppercase equivalent if c is a lowercase letter and has an uppercase equivalent. If no such conversion is possible, the value returned is c unchanged.
		*/
	}
	puts("\nminusculo:");
	for (i=0; palavra[i]!='\0'; i++)
	{
		printf("%c", tolower(palavra[i]));
		/*
		function <cctype> tolower
		int tolower ( int c );
		Convert uppercase letter to lowercase
		Converts c to its lowercase equivalent if c is an uppercase letter and has a lowercase equivalent. If no such conversion is possible, the value returned is c unchanged.
		*/
	}

    return 0;
}