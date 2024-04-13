#include<stdio.h>
main() 
{
	float produto, novo, aumento;
	
	printf("Valor do produto: ");
	scanf("%f",&produto);
	
	if (produto<=50){
		aumento=produto*0.05;
		
	} else if(produto<=100){
		aumento=produto*0.1;
		
	} else {
		aumento=produto*0.15;
	}
	novo=produto+aumento;
	printf("\nValor do novo preco: %.2f",novo);
	
	if (novo<=80) {
		printf("\nClassificacao: Barato");
	} else if (novo<=120){
		printf("\nClassificacao: Normal");
	} else if(novo<=200){
		printf("\nClassificacao: Caro");
	} else {
		printf("\nClassificacao: Muito caro");
	}
	
	
}
