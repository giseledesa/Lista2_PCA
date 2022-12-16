#include <stdio.h>
#include <math.h>

int main()
{
	float f = 0 , c; 
	printf("Temperatura em Celsius: ");
	scanf("%f", &c);
	f = (c * 1.8)+32; 
//	f  = ((9*c)/5)+32;
	printf("Temperatura em Fahrenheit = %.2f", c);	
}
