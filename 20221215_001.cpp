#include <stdio.h>

int main(){
	float a, b, soma;
	soma = 0;
	printf("Digite o primeiro valor: ");
	scanf("%f", &a);
	printf("Digite o segundo valor: ");
	scanf("%f", &b);
	soma = a + b;
	printf(" %.2f + %.2f = %.2f ", a,b, soma);	
}
