#include <stdio.h>

int main()
{
    float h, peso = 0;
    
    printf("Digite sua altura: ");
    scanf("%f", &h);
    peso = (72.7*h)-58;
    
    printf("Peso ideal: %.2f",peso);
}
