/*
14.	Leia dois valores, e exiba sua soma. Em seguida pergunte ao usuário:  “Novo Cálculo (S/N)?”. Deve-se ler a resposta e se a resposta for ‘S’ (sim), deve-se repetir todos os comandos (instruções) novamente, mas se for qualquer outra resposta, o algoritmo deve ser finalizado escrevendo a mensagem “Fim dos Cálculos”.

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex14#main.c
*/

/*
planejamento:
Declaração das variaveis float para num1, num2 e soma;
declara de variavel char para controle da estrutura de repeticao
utilizar DO-WHILE como estrutura (codigo será executado pelo menos 1 vez);
solicitar #1 numero;
ler #1 numero;
solicitar #2 numero;
ler #2 numero;
somar os dois numero;
exibir resultado;
solicitar se deseja continuar;
ler resposta
	analise de repeticao (enquanto S, continua no laco);
	saida do laco em caso N;
exibi mensagem de finalização
*/

#include <stdio.h>


int main(void) 
{

	float num1, num2, soma;
	char continua;

	do
	{
		
		printf("insira o primeiro valor: ");
		scanf (" %f", &num1);
		printf("insira o segundo valor: ");
		scanf (" %f", &num2);
		soma = num1+num2;
		printf("SOMA = %.2f\n", soma);
		printf("Novo Calculo (S/N)? ");
		scanf (" %c", &continua);
		

		/*(...) A leitura de valores através da maioria das funções usa o buffer do teclado como repositório temporário dos carcteres que nós escrevemos.
		
		A utilizaçao do buffer é visivel pelo fato de podermos alterar o caractere escrito antes de o enviarmos para o programa, bastando para tal clicar na tecla backspace, apagando o caractere atual e voltando a escrever o caractere ou caracteres desejados.  O que importa realçar é ue, enquanto não pressionarmos a tecla <enter> do teclado não é enviado as variaveis.
		Se não estivessemos usando o buffer do teclado, assim que batessemos numa tecla o caractere seria automaticamente colocado na variavel sem necessitar que fosse pressionada a tecla enter.
		
		No nosso exemplo, como o caractere ficava no buffer após a primeira leitura, era necessário removê-lo antes de realizar a nova leitura de um caractere. Assim, colocamos um espaço em branco antes do %c de forma que o scanf ignore e retire do buffer todos os separadores ('\n', '\t' e ' ') que encontrar.
		Este é um pequeno truque que é bom fixar!
		Uma outra forma de resolver o problema consiste em limpar todos os caracteres que existam no buffer do teclado utilizando a função fflush(stdin); ou getchar();
		*/

	} while (continua == 'S');

	printf ("Fim dos calculos");
    
    return 0;
}