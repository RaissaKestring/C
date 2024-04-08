#include <stdio.h>
main ()
{	
	
	float peso, mais15, novopeso15, menos20, novopeso20;
	
	printf("qual o seu peso: ");
	scanf("%f",&peso);
	mais15=peso*0.15;
	novopeso15=peso+mais15;
	menos20=peso*0.2;
	novopeso20=peso-menos20;
	printf("caso engorde 15 do seu peso: %f\n",novopeso15);
	printf("caso emagreca 20 do seu peso: %f", novopeso20);
	
	
}
