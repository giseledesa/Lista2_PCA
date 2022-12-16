#include <stdio.h>
#include <math.h>

int main()
{
	float s_horas, n_horas, sal = 0; 
	printf("Valor por hora: ");
	scanf("%f", &s_horas);
	printf("Quantidade de horas mensal: ");
	scanf("%f", &n_horas);
	sal  =  s_horas*n_horas ;
	printf("Salário = %.2f", sal);	
}
