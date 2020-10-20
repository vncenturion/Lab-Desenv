/*
11.	Faça algoritmo que funcione como uma calculadora entre dois números, e que possua as 4 operações básicas: soma, subtração, divisão e multiplicação. O programa deve perguntar ao usuário qual operação ele quer realizar, a resposta do usuário deverá ser um caractere, '+' se soma, '-' se subtração, '*' se multiplicação, e '/' se divisão. Em seguida o programa deve pedir para o usuário digitar o primeiro número e depois o segundo. Como saída o programa deve exibir o resultado da operação realizada.
a) faça utilizando if/else.
b) faça utilizando switch/case.

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex11b#main.c
*/

/*
planejamento:
declarar variaves float (em razao das divisoes) numero1 numero2 e resultado;
declarar variavel para caractere "operacao";
solicitar operacao do usuario
ler operacao que vai ficar associada ao char;
solicitar primeiro numero
ler primeiro numero
solicitar segundo numero
ler segundo numero
condicoes
	se operacao = +
		resultado = numero1+numero2
		exibe resultado
	senao se operacao = -
		resultado = numero1-numero2
		exibe resultado
	senao se operacao = *
		resultado = numero1*numero2
		exibe resultado
	senao se operacao = /
		resultado = numero1/numero2
		exibe resultado
	senao
		exibe mensagem de operacao invalida

*/

#include <stdio.h>


int main(void) 
{
	float num1, num2, resultado;
	char operacao;
	/*
		O tipo char permite armazenar UM UNICO CARACTERE numa variavel desse tipo. (...) Um dos erros mais comuns de programcao em C é pensar que o tipo char permite armazenar strings ou conjuntos de caracterese numa variavel do tipo char. (...) Independentemente da arquitetura utilizada, sempre se armazena (char) num unico byte.
		[...]
		a representacao de um caractere individual é sempre realizada entre aspas simples ('A', '2', '\n'). A utilizacao de aspara para a repreentacao de um caractere "A" é um erro comum, está totalmente incorreta e pode levar a algumas surpresas nao muito agradaveis (DAMAS, 2017, p. 36 )
	*/
	
	printf("Selecione a operação (+) (-) (*) (/) : ");
	scanf("%c", &operacao);
	printf("Digigite o primeiro numero: ");
	scanf ("%f", &num1);
	printf("Digigite o segundo numero: ");
	scanf ("%f", &num2);

	switch (operacao)
	{
		
		case '+':
			resultado = num1 + num2;
			printf ("resultado = %.2f", resultado);
		break;

		case '-':
			resultado = num1 - num2;
			printf ("resultado = %.2f", resultado);
		break;

		case '*':
			resultado = num1 * num2;
			printf ("resultado = %.2f", resultado);
		break;

		case '/':
			resultado = num1 / num2;
			printf ("resultado = %.2f", resultado);
		break;

		default:
			printf ("operacao invalida");
	}

	return 0;
}