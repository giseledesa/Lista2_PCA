#include <stdio.h>

int main()
{
	float m, cm; 
	printf("Digite o comprimento em metros: ");
	scanf("%f", &m);
	cm =  m*100;
	printf("Comprimento em centimetros = %.2f ", cm);	
}
