#include <stdio.h>
main ()
{
	
	float pesokg, pesog;
	
	printf("digite o seu peso(kg): ");
	scanf("%f",&pesokg);
	pesog=pesokg*1000;
	printf("seu peso em grama e igual a: %.2f",pesog);
	
}
