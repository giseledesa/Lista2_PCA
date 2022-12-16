#include <stdio.h>
#include <math.h>

int main()
{
	float area, r, pi = 3.14; 
	printf("Digite o comprimento do raio: ");
	scanf("%f", &r);
	area =  pi * pow(r,2) ;
	printf("Area = %.2f", area);	
}
