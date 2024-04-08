#include <stdio.h>
main ()
{	
	
	float celcius, fahrenheit;
	
	printf("Qual a temperatura(C): ");
	scanf("%f",&celcius);
	fahrenheit=180*(celcius+32)/100;
	printf("a temperatura digitada em fahrenheit e de:(F) %.1f",fahrenheit);
}
