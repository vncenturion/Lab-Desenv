/*
2.	Que peça ao usuário para digitar um caractere, e em seguida exiba esse caractere na tela. 
a) exiba como caractere (%c). 
b) exiba como inteiro (%d). 
c) exiba como hexadecimal (%x).

solucao em:
https://repl.it/@ViniciusB1/LDA-L1-ex02#main.c
*/

/*
planejamento:

declarar variavel carectere
pedir para digitar o caractere
leitura do caractere digitado
exibicao dos formatos para carectere, para inteiro, para hexadecimaal
*/

#include <stdio.h>

int main(void) 
{
    char caractere;
	printf("digite um caractere ASCII: ");
    scanf("%c", &caractere);
    printf("caractere ascii sinal: %c\n", caractere);
	printf("caractere ascii em decimal: %d\n", caractere);
	printf("caractere ascii em hexadecimal: %x\n", caractere);
	
	/*

	apenas didaticamente: 

	int numero;
	scanf("%d", &numero);
	printf("caractere ascii sinal: %c\n", numero);
	printf("caractere ascii em decimal: %d\n", numero);
	printf("caractere ascii em hexadecimal: %x\n", numero);

	int hexa;
	scanf("%x", &hexa); //optionally preceded by 0x or 0X, and all optionally preceded by a sign (+ or -).
	printf("caractere ascii sinal: %c\n", hexa);
	printf("caractere ascii em decimal: %d\n", hexa);
	printf("caractere ascii em hexadecimal: %x\n", hexa);
	
	*/

    return 0;
}