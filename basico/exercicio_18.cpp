#include <stdio.h>
main ()
{
	char prof[30], end[30], cid[30], uf[2], curso[20], cep[10],cpf[10], rg[10], escola[2], nasc[10], tel[10];

	printf("Digite nome do professor: ");
	scanf("%s",prof);
	printf("Endereco: ");
	scanf("%s",end);
	printf("Cidade: ");
	scanf("%s",cid);
	printf("UF: ");
	scanf("%s",uf);
	printf("CEP: ");
	scanf("%s",cep);
	printf("Telefone para contato: ");
	scanf("%s",tel);
	printf("CPF: ");
	scanf("%s",cpf);
	printf("RG: ");
	scanf("%s",rg);
	printf("Data de nascimento: ");
	scanf("%s",nasc);
	printf("Grau de escolaridade: ");
	scanf("%s",escola);
	printf("Qual curso voce leciona: ");
	scanf("%s",curso);
	
	printf("DADOS DE DISCIPLINA ESCOLAR: ");
	printf("\n______________________________");
	printf("\nProfessor: %s",prof);
	printf("\nEndereço: %s",end);
	printf("\nCidade: %s",cid);
	printf("\nUF: %s",uf);
	printf("\nCEP: %s",cep);
	printf("\nTelefone para contato: %s",tel);
	printf("\nCPF: %s",cpf);
	printf("\nRG: %s",rg);
	printf("\nData de nascimento: %s",nasc);
	printf("\nGrau de escolaridade: %s",escola);
	printf("\nQual curso voce leciona: %s",curso);
		
}
