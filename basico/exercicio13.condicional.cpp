#include<stdio.h>
main()
{
	float custo, preco;
	
	printf("Custo: ");
	scanf("%f",&custo);
	
	if(custo<=15000){
		preco = custo*0.05;
		printf("O preco e de: %f",preco);
		
	} else if (custo>=15000 && custo<=25000) {
		preco=(custo*0.1 + custo*.2);
		
	} else {
		preco=(custo*0.15 + custo*0.2);
	}
	printf("O valor final sera de: %.2f",preco+custo);
}
