#include<stdio.h>
main()
{
	
	float salario, aumento;
	
	printf("Salario atual: ");
	scanf("%f",&salario);
	
	if(salario<3000) {
		aumento=salario+(salario*0.15);
	} else if(salario>=3000 && salario<=6000){
		aumento=salario+(salario*0.1);
	}	else if(salario>=6000 && salario<=9000) {
		aumento=salario+(salario*0.05);
	} else {
		aumento=salario;
	}
	printf("O salario com aumento foi de: %.2f",aumento);
}
