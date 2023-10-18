
#include <stdio.h>

main() 
{
	float bolsa, descontos;
	int opc1, opc2, opc3, opc4;
	
	printf("Digite o valor da bolsa de estudos: ");
	scanf("%f", &bolsa);
	
	printf("\nDigite 1 se voce paga aluguel, caso contrario, digite 0: ");
	scanf("%d", &opc1);
	
	printf("\nDigite 1 se voce come na universidade, caso contrario, digite 0: ");
	scanf("%d", &opc2);
	
	printf("\nDigite 1 se voce usa o laboratorio ou usa a biblioteca, caso contrario, digite 0: ");
	scanf("%d", &opc3);
	
	printf("\nDigite 1 se voce tem cota de fotocopias ou usa o estacionamento, caso contrario, digite 0: ");
	scanf("%d", &opc4);
	
	if((opc1 == 1 && (opc2 + opc3 + opc4) == 0) || (opc2 == 1 && (opc1 + opc3 + opc4) == 0)) 
	{
		descontos += 10;
	}
	else 
	{
		if(opc1 == 1 && opc2 == 1) 
		{
			descontos += 15;
		}
		
		if(opc3 == 1) 
		{
			descontos += 5;
		}
		
		if(opc4 == 1) 
		{
			descontos += 8;
		}
	}
	
	bolsa = bolsa * (1 - descontos / 100);
	
	printf("\nValor total dos descontos: %.0f%%\nValor total da bolsa com descontos: R$%.2f", descontos, bolsa);	
}
