/*
1.	Ler um número (inteiro? real?) e exibir a frase: “o número digitado foi: ” e logo após esta frase apresentar o valor do número lido.

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex01#main.c
*/

/*
planejamento:

declarar variavel como inteira
leitura do numero digitado
exibicao do numero
*/

#include <stdio.h>

int main(void) 
{
  int numero;
  scanf("%d", &numero);
  printf("o número digita foi: %d\n", numero);
  return 0;
}