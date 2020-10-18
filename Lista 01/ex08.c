/*
8.	Escreva um algoritmo que leia 3 números e diga qual é o menor entre os três.

solucao em:
https://repl.it/@ViniciusB1/LDA-L1-ex08#main.c
*/

/*
planejamento:

declarar tres variaveis float
leitura das variaveis uma a uma;
comparacao entre os valores
	se num1 <= num2 e num1 <= num3
		caso afirmativo: exibe mensagem que num1 é o menor
		caso negativo: continua analise
	senao se num2 <=  num1 e num2 <= num3
		caso afirmativo: exibe mensagem que num2 é o menor
		caso negativo: entra no senao
	senao
		exibe mensagem que num3 é o menor
fim
*/

#include <stdio.h>

int main(void) 
{
  float num1, num2, num3;
  scanf("%f", &num1);
  scanf("%f", &num2);
  scanf("%f", &num3);

  if (num1 <= num2 && num1 <= num3)
  {
	  printf("Numero %.2f eh menor numero fornecido.", num1);
  }
  else if (num2 <= num1 && num2 <= num3)
  {
	  printf("Numero %.2f eh menor numero fornecido.", num2);
  }
  else
  {
	  printf("Numero %.2f eh menor numero fornecido", num3);
  }
  return 0;
}