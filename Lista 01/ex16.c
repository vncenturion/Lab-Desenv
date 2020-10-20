/*
16.	Leia um número inteiro e diga se ele é um número primo ou não.

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex16#main.c
*/

/*
planejamento:
declarar variaveis  inteiras para numero lido, controle da estrutura de repeticao, contador dos divisores, calculo da divisao;
solicitar nomero do usuario;
ler numero informado;
estrutura de repeticao para contagem de divisores de a partir de 1 ate o numero informado;
condiçao de numero primo = encontrar apenas 2 divisores.
estrutura de selecao para exibir os resultados:
	se 1 divisor = numero 1 nao é primo;
	se 2 divisores = o numero é primo;
	se 3 ou mais divisores = o numero 

*/
#include <stdio.h>

int main(void) {

  int n=0, i=1, contador=0, divisao=0;
  printf("Digite um numero natural não nulo qualquer: ");
  scanf("%d", &n);
  
  //validacao da entrada natural nao nula
  while (n<=0)
  {
    printf("NUMERO INVALIDO!\n\n");
    printf("Digite um numero NATURAL NÃO NULO qualquer: ");
    scanf("%d", &n);
  }

  //contagem dos divisores
  while (i<=n){
    
    //o teste exibe os divisores encontrados
    if (n%i==0)
    {
      divisao=n/i;
      contador=contador+1;
      //printf("teste: %d divido %d = %d; contador: %d\n", n, i, divisao, contador); //apenas para exibir os divisores e conferencia
    }

    i=i+1;

  }
  
  //enumeracao dos casos excepcionais para 1 e numeros compostos
  switch (contador){
    case 1:
      printf("\nO numero 1 nao e primo pois possui apenas um unico divisor - ele mesmo!\n");
      break;
    case 2:
      printf("\nO numero %d e primo!\n", n);
      break;
    default:
      printf("\nO numero %d nao e primo, pois possui %d divisores!\n", n, contador);
  }

  printf("\nFIM DO PROGRAMA!");
  return 0;
}