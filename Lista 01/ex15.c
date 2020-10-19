/*
15.	Desenhe na tela uma forma geométrica utilizando caracteres, utilize um espaço entre os caracteres. Sugestão de caracteres: X, 0, O.
a) Desenhe um quadrado de tamanho 5x5. 
    Exemplo:
    
    X X X X X
    X X X X X
    X X X X X
    X X X X X
    X X X X X

b) Pergunte ao usuário qual o tamanho do quadrado que ele quer que seja desenhado, e o desenhe. 


solucao em:
https://repl.it/@ViniciusB1/LDA-L1-ex15#main.c
*/

/*
planejamento:
declarar duas variaveis INT para controle de 2 estruturas FOR;
utilizar estrutura FOR para controle do numero de linhas (i),
que tera dentro dela a segunda estrutura FOR para imprimir os valores da linha e ainda o caractere (\n) ao final, de modo a mudar de linha quando o estrutura que imprime terminar.

declarar uma variavel para controle da condicao de tamanho do quadrado;
solicita do usuario o tamanho do lado do quadro a ser desenhado;
leia o tamanho informado;
substitua os valores nas estruturas de repeticao na parte relativa a condição "i <= numero informado" e "j <= numero informado";
imprima o quadrado.
*/

#include <stdio.h>


int main(void) 
{
	int i, j;

	for (i=1; i<=5; i++)
	{
		for (j=1; j<=5; j++)
		{
			printf ("X ");
		}
		printf ("\n");
	}
    
	int condicao;

	
	printf("\nInforme o tamanho do quadrado que deseja imprimir: ");
	scanf("%d", &condicao);

	for (i=1; i<=condicao; i++)
	{
		for (j=1; j<=condicao; j++)
		{
			printf ("X ");
		}
		printf ("\n");
	}

    return 0;
}