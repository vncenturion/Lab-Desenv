/*
6.	Ler um número e diga se eles está contido no intervalo entre 10 e 15, onde 10 e 15 também pertencem ao intervalo.

solucao em:
https://repl.it/@ViniciusB1/LDA-L1-ex06#main.c
*/

/*
planejamento:
declarar variavel para numero;
leitura do numero fornecido;
comparação do numero com o intervalo: num >= 10 e num <=15
    caso verdade: exibir mensagem para caso afirmativo
    caso falto: exibir mensagem para caso negativo
fim do programa
*/


#include <stdio.h>

int main(void) 
{
  int numero;
  scanf("%d", &numero);
  if (numero >=10 && numero <= 15)
  {
	  printf ("Numero %d pertence ao intervalo [10;15]\n", numero);
  }
  else
  {
	  printf ("Numero %d NAO PERTENCE ao intervalo [10;15]\n", numero);
  }
  return 0;
}