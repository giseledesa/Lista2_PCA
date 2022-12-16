#include <stdio.h>
#include <math.h>

int main()
{
	float f, c= 0; 
	printf("Temperatura em Fahrenheit: ");
	scanf("%f", &f);
	c  = ((f-32) /9)*5 ;
	printf("Temperatura em Celsius = %.2f", c);	
}
