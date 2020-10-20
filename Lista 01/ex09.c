/*
9.	Uma companhia quer verificar se um empregado está qualificado para a aposentadoria. Para estar em condições, um dos seguintes requisitos deve ser satisfeito: 
    * Ter no mínimo 65 anos de idade. 
    * Ter trabalhado, no mínimo 30 anos. 
    * Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos. 
Ler os dados: o ano de nascimento do empregado e o ano de seu ingresso na companhia. O programa deverá escrever a idade e o tempo de trabalho do empregado e a mensagem “Requerer aposentadoria” ou “Não requerer”.
Obs.: Utilize como ano atual o ano de 2011.

solucao em:
https://repl.it/@ViniciusB1/LDA-AT1-ex09#main.c
*/

/*
planejamento:

declarar variavel para idade, tempo de servico,  variavel auxiliar para calculo, e variavel para identificar requisito.
leitura do ano de nascimento para AUX;
calculo de idade = 2011-aux;
leitura de ano de ingresso para AUX;
calculo de tempo de servico = 2011-aux;
compracao 01
	se idade >= 65
		caso afirmativo: requisito = 1
		caso negativo: continua
	se tempo servico >= 30
		caso afirmativo: requisito = 1
		caso negativo:  continua
	se idade>=60 E tempo servico >= 25
		caso afirmativo: requisito = 1
		caso negativo: continua

	se requisito == 1
		caso afirmativo: imprime "requerer aposentadoria"
		caso negativo: imprime "não requerer"
        obs.: mecanismo para evitar repeticao de mensagem caso atenda mais de 1 criterio de aposentadoria.

*/

#include <stdio.h>

int main(void) 
{
	int idade=0, tempoServico=0, aux=0, aposenta=0;
  	printf ("Insira ano de nascimento: ");
	scanf ("%d", &aux);
	idade = 2011-aux;
	printf ("Insira ano de ingresso na companhia: ");
	scanf ("%d", &aux);
	tempoServico = 2011-aux;

	if (idade>=65)
	{
		aposenta += 1;
	}
	else if (tempoServico>=30)
	{
		aposenta += 1;
	}
	else if (idade>=60 && tempoServico>=25)
	{
		aposenta += 1;
	}

	if (aposenta >= 1)
	{
		
		printf ("Requerer aposentadoria.\n");
		//printf ("aposenta: %d\nIdade: %d\nTempo de Servico: %d", aposenta, idade, tempoServico);
	}
	else
	{
		printf ("NAO requerer.\n");
		//printf ("aposenta: %d\nIdade: %d\nTempo de Servico: %d", aposenta, idade, tempoServico);
	}	
	return 0;
}