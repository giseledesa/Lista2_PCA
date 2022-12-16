#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2;
    float n3, prod = 0, soma = 0, qd = 0;
    
    printf("Digite o 1° número do tipo < Inteiro> : ");
    scanf("%d", &n1);
    printf("Digite o 2° número do tipo < Inteiro> : ");
    scanf("%d", &n2);
    printf("Digite o 3° número do tipo < Real >: ");
    scanf("%f", &n3);
    
    prod = (2*n1)*(n2/2);
    soma = 3*n1+n3;
    qd = pow(n3,3);
    
    printf("2 * %d + %d/2 = %.2f", n1, n2, prod);
    printf("3 * %d + %f = %.2f", n1, n3, soma);
    printf("%f^3 = %.2f", n1, n3, qd);
}
