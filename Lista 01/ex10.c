/*
10.	Leia o ano de nascimento de um nadador, calcule sua idade, e classifique-o em uma das categorias: 
  * Infantil A --- de 5 a 7 anos 
  * Infantil B --- de 8 a 10 anos 
  * Juvenil A --- de 11 a 13 anos 
  * Juvenil B --- de 14 a 17 anos 
  * Sênior --- maiores de 17 anos 
    
Obs.: Utilize como ano atual o ano de 2011.
O programa deve fornecer uma saída do tipo:
Nadador de idade “idade” é da categoria “categoria”

solucao em:
https://repl.it/@ViniciusB1/LDA-L1-ex10
*/

/*
planejamento:
declarar variaveis anoNascimento, idade;
leitura de ano de nascimento;
calculo da idade: idade = 2011 - anoNascimento;
determinação de condição para determinação das categorias:
	
	se 5 >= idade <= 7
    atribui string com categoria
		exibe mensagem: 
	se 8 >= idade <= 10
    atribui string com categoria
		exibe mensagem: 
	se 11 >= idade <= 13
		atribui string com categoria
    exibe mensagem: 
	se 14 >= idade <= 17
    atribui string com categoria
		exibe mensagem: 
	se idade > 17
    atribui string com categoria
		exibe mensagem: 

fim
*/

#include <stdio.h>
#include <string.h>

int main(void) 
{
	int idade, anoNascimento;
	
  	printf ("Insira o ano de nascimento do nadador: ");
  	scanf ("%d", &anoNascimento);
  	idade = 2011 - anoNascimento;
	
	if (idade>=5 && idade<=7)
  	{
		char categoria[]= "Infantil A";
		printf("Nadador de idade %d é da categoria %s\n", idade, categoria);
  	}
  	else if (idade>=8 && idade<=10)
 	{
		char categoria[]= "Infantil B";
		printf("Nadador de idade %d é da categoria %s\n", idade, categoria);
	}
	else if (idade>=11 && idade<=13)
	{
		char categoria[]= "Juvenil A";
		printf("Nadador de idade %d é da categoria %s\n", idade, categoria);
	}
	else if (idade>=14 && idade<=17)
	{
		char categoria[]= "Juvenil B";
		printf("Nadador de idade %d é da categoria %s\n", idade, categoria);
	}
	else if (idade>17)
	{
		char categoria[]= "Senior";
		printf("Nadador de idade %d é da categoria %s\n", idade, categoria);
	}
	else
	{
		printf("Nadador nao atingiu idade suficiente para nenhuma categoria valida\n");
	}
	return 0;
}