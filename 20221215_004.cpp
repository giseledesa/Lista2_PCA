#include <stdio.h>
#include <math.h>

int main()
{
	float lado, area; 
	printf("Lado do Quadrado: ");
	scanf("%f", &lado);
	area =  2 * pow(lado,2) ;
	printf("Area = %.2f", area);	
}
