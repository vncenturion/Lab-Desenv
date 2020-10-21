/*
24.	Fazer uma programa que codifica um string pelo método  ZENIT-POLAR 

    Z   E   N   I   T 
    P   O   L   A   R 
	
Ou seja, onde aparece um 'Z' no string de entrada, aparecerá um 'P' na saída; e, semelhantemente, onde aparece um 'P' no string de entrada, aparecerá um 'Z' na saída. Isto deve ocorrer para todos os pares em ZENIT-POLAR, maiúsculas e minúsculas. As outras letras não são alteradas. 

Por exemplo, o string "Parabens a voce" é codificado para "Zitibols i veco". Ao se aplicar duas vezes a transformação, obtém-se o mesmo string, ou seja, a codificação de "Zitibols i veco" é "Parabens a voce".

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex24#main.c

*/

/*
planejamento:
declarar dois vetores para strings pre dimensionados e inicializados com "\0", um para receber a mensagem a ser codificada e outro para receber a mensagem codificada, string1 e string2
declarar uma variavel inteira aux para controle de estrutura de repeticao;
declara uma variavel caractere para estrutura de selecao = i;
solicitar mensagem ao usuário;
ler mensagem;
estrutura de repeticao com inicializacao na posicao 0 da stringa da mensagem a ser codificada e finalização caso encontre o caractere finalizador '\0';
	caractere aux recebe o caractere na posicao [i = variavel de controle de laço];
	estrutura de seleçao analisa variavel aux;
		caso caractere ser Z ou z
			string de codigo na posicao [i] recebe P ou p;
		caso caractere ser E ou e
			string de codigo na posicao [i] recebe O ou o;
		caso caractere ser N ou n
			string de codigo na posicao [i] recebe L ou l;
		caso caractere ser I ou i
			string de codigo na posicao [i] recebe A ou a;
		caso caractere ser T ou t
			string de codigo na posicao [i] recebe R ou r;
		caso caractere ser P ou p
			string de codigo na posicao [i] recebe Z ou z;
		caso caractere ser O ou o
			string de codigo na posicao [i] recebe E ou e;
		caso caractere ser L ou l
			string de codigo na posicao [i] recebe N ou n;
		caso caractere ser A ou a
			string de codigo na posicao [i] recebe I ou i;
		caso caractere ser R ou r
			string de codigo na posicao [i] recebe T ou t;
	
	exibe mensagem codificada a partir da string de codigo (string2)

*/


#include <stdio.h>
#include <string.h>

int main(void) 


{
	char string1[100] = "\0";
	char string2[100] = "\0";
	char aux;
	int i=0;
	printf("Digite a mensagem a ser codificada: ");
	gets(string1);

	do
	{
		aux=string1[i];
		switch (aux)
		{
			case 'z':
				string2[i]='p';
			break;
			case 'Z':
				string2[i]='P';
			break;
			case 'e':
				string2[i]='o';
			break;
			case 'E':
				string2[i]='O';
			break;
			case 'n':
				string2[i]='l';
			break;
			case 'N':
				string2[i]='L';
			break;
			case 'i':
				string2[i]='a';
			break;
			case 'I':
				string2[i]='A';
			break;
			case 't':
				string2[i]='r';
			break;
			case 'T':
				string2[i]='R';
			break;
			case 'p':
				string2[i]='z';
			break;
			case 'P':
				string2[i]='Z';
			break;
			case 'o':
				string2[i]='e';
			break;
			case 'O':
				string2[i]='E';
			break;
			case 'l':
				string2[i]='n';
			break;
			case 'L':
				string2[i]='l';
			break;
			case 'a':
				string2[i]='i';
			break;
			case 'A':
				string2[i]='I';
			break;
			case 'r':
				string2[i]='t';
			break;
			case 'R':
				string2[i]='T';
			break;
			default:
				string2[i]=string1[i];

		}
		i+=1;
	} while (string1[i]!='\0');

	printf("Mensagem codificada: %s\n", string2);

    return 0;
}