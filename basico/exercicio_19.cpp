#include <stdio.h>
main ()
{	

	char nome[20], descr[50], freq[10], media[10];
	
	printf("Nome: ");
	scanf("%s",nome);
	printf("descricao: ");
	scanf("%s",descr);
	printf("frequencia: ");
	scanf("%s",freq);
	printf("media minima para aprovacao: ");
	scanf("%s",media);
	
	printf("\nDADOS DA DISCIPLINA: ");
	printf("\n_____________________");
	printf("\nNOME: %s",nome);
	printf("\nDESCRICAO: %s",descr);
	printf("\nFREQUENCIA: %s",freq);
	printf("\nMEDIA MINIMA PARA APROVACAO: %s",media);
	
}
