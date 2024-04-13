#include<stdio.h>
main ()
{	
	float saldo, credito;
	
	printf("Informe seu saldo: ");
	scanf("%f",&saldo);
	
	if(saldo<=2000) {
		credito=saldo*0.1;
		
	} else if (saldo<=3000){
			credito=saldo*0.2;
			
	} else if (saldo<=4000) {
		credito=saldo*0.25;
		
	} else {
		credito=saldo*0.3;
	}
	printf("Valor do saldo medio: %f\n", saldo);
	printf("Valor do credito: %f\n", credito);
	
}
