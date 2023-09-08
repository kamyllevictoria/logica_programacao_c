#include <stdio.h>
#include <stdlib.h>

main() {
    float dias_trabalhados, valor_hora, horas_extras, valor_extra, total_base, total_extra;
    
    printf("Quantos dias da semana voce trabalha? ");
    scanf("%f", &dias_trabalhados);
    
    printf("Qual é o valor de cada hora exercida? ");
    scanf("%f", &valor_hora);
    
    total_base = (dias_trabalhados * 8) * valor_hora;
    printf("Entao, no fim do mes voce ganha R$ %.2f.\n", total_base);
    
    printf("\nVoce faz quantas horas extras? ");
    scanf("%f", &horas_extras);
    
    printf("\nQuanto custa cada hora extra? ");
    scanf("%f", &valor_extra);
    
    total_extra = horas_extras * (valor_extra * 1.2);
    
    printf("Certo, entao voce recebe R$ %.2f pelo horario extra.\n", total_extra);
    

}

