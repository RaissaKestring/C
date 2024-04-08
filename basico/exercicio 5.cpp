#include <stdio.h>
main ()
{
	float preco, novopreco, descont;
	
	printf("qual o preco do produto: ");
	scanf("%f", &preco);
	descont=preco*0.1;
	novopreco=preco-descont;
	printf("o preco do produto com desconto foi de %.2f",novopreco);
}
