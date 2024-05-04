#include<stdio.h>
main() 
{
	char nome[10], sexo;
	int idade, i;
	
	for (i=0; i<=20; i++) {
	
	printf("Informe o nome: \n");
	fflush(stdin); // limpa a memoria
	gets(nome);
	
	printf("Digite seu sexo sendo que m para masculino e f para feminino: ");
	scanf("%c",&sexo); // so posso usar gets em um conjunto de caracteres
	// o & sempre que leio uma string ou é opcional? uso sempre
	// uso %c quando tem só um caractere, senão é s
	
	printf("Informe a idade: \n");
	scanf("%d",&idade);
	
	//printf("Nome: %s\n", nome);
	//printf("Sexo: %c\n", sexo);
	//printf("idade: %d\n", idade);
		
		if (sexo == 'm' && idade>21){
				printf("%s\n: ",nome);
			}
		}
}
