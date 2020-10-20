/*
12.	A professora mandou que joãozinho escrevesse 500 vezes no quadro a frase: “Eu não vou mais jogar aviõezinhos de papel na sala de aula”.
a) Faça o que a professora pediu utilizando a estrutura for.
b) Faça o que a professora pediu utilizando a estrutura while.

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex12#main.c
*/

/*
planejamento:
declarar variavel de controle;
declarar estrutura de repeticao FOR de 1 a 500;
	exibe a mensagem
ressetar variavel de controle;
declarar a estrutura de repeticao WHILE de 1 a 500;
	exibe a mensagem
*/

#include <stdio.h>


int main(void) 
{
	int i;
    
	printf("\nFOR:\n");
  
  	for (i=1; i<=500; i++)
  	{
    	printf("%d: Eu não vou mais jogar aviaozinho de papel na sala de aula.\n",i);
  	}
	
  	getchar();

  	i=1;
  	printf("\nWHILE:\n");

  	while (i<=500)
	{
		printf("%d: Eu não vou mais jogar aviaozinho de papel na sala de aula.\n",i);
    
    	i++;
  	}
  
  	printf("\n--- fim do programa ---");
  	return 0;
    
}