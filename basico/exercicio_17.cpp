#include <stdio.h>
main ()
{	
	char nome[30];
	int idade;
	
	printf("qual o seu nome: ");
	scanf("%s",&nome);
	printf("qual a sua idade: ");
	scanf("%i",&idade);
	printf("Nome: %s\n",nome);
	printf("Idade: %i",idade);
}
