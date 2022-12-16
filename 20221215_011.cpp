#include <stdio.h>

int main()
{
    float sal_h, h_trab, sal_l = 0, sal_b = 0, desconto = 0;
    float ir = 0, inss = 0, sind = 0;
    
    printf("Digite quanto você ganha por hora: ");
    scanf("%f", &sal_h);
    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &h_trab);
    
    sal_b = sal_h*h_trab; 
    ir = 0.11*sal_b;
    inss = 0.08*sal_b; 
    sind = 0.05*sal_b;
    desconto = inss+ir+sind;
    sal_l = sal_b-desconto;
    
    printf("\nSalario Bruto: %.2f\nImposto de Renda (IR): %.2f\nINSS: %.2f\nSindicato dos Trabalhadores: %.2f",sal_b,ir,inss,sind);
    printf("\n\nSalario Liquido: %.2f",sal_l);
}
