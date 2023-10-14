#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Inclusão de acentuação na língua portuguesa
    int idade;
    float salario;
    
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    
    printf("Informe seu salário: ");
    scanf("%f", &salario);
    
    if (salario < 0 || idade < 0) {
        printf("\nOs dados informados são inválidos. Não é possível realizar a operação com valores negativos!");
    } 
		else if (idade < 18 && idade > 0 && salario != 0) {
			printf("O salario informado: R$%.2f.", salario);
			printf("\nO desconto dos impostos (5%%): R$%.2f.", salario*0.05);
			printf("\nSaldo final: R$%.2f." , salario - salario*(0.05));    
	    }
	    	else if(idade >= 18 && idade <= 59){
	    		if(salario <= 5000){
	    			printf("O salario informado: R$%.2f.", salario);
					printf("\nO desconto dos impostos (10%%): R$%.2f.", salario*0.10);
					printf("\nSaldo final: R$%.2f." , salario - salario*(0.10));    
				}
					else if(salario > 5000 && salario <= 15000){
						printf("O salario informado: R$%.2f.", salario);
						printf("\nO desconto dos impostos (15%%): R$%.2f.", salario*0.15);
						printf("\nSaldo final: R$%.2f." , salario - salario*(0.15)); 
					}
						else if(salario > 15000 && salario <= 25000){
							printf("O salario informado: R$%.2f.", salario);
							printf("\nO desconto dos impostos (25%): R$%.2f.", salario*0.25);
							printf("\nSaldo final: R$%.2f." , salario - salario*(0.25)); 
						}
							else if(salario > 25000){
								printf("O salario informado: R$%.2f.", salario);
								printf("\nO desconto dos impostos (25.7%%): R$%.2f.", salario*0.275);
								printf("\nSaldo final: R$%.2f." , salario - salario*(0.275)); 
							}					
			}
		else{
			printf("O salario informado: R$%.2f.", salario);
			printf("\nO desconto dos impostos (50%%): R$%.2f.", salario*0.50);
			printf("\nSaldo final: R$%.2f." , salario - salario*(0.50)); 
		}

   // return 0;
}


