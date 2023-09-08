#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	int aulas_dadas, aulas, faltas, faltas_max;
	printf("Class: Biology: ");
	printf("\nInforme o numero de aulas dadas de biologia durante o semestre:");
	scanf("%d" ,&aulas_dadas);
	printf("Informe quantas aulas voce participou?");
	scanf("%d" ,&aulas);
	faltas = aulas_dadas - aulas;
	printf("Numero total de faltas: %d." ,faltas);
	faltas_max = 0.25 * aulas_dadas;
	if (faltas > faltas_max){
		printf("\nREPROVADO. \nFaltas:%d \nNumero maximo de faltas:%d \nAulas comparecidas:%d \nAulas dadas:%d " ,faltas, faltas_max, aulas, aulas_dadas );
	}
	else{
		printf("\nAPROVADO. \nFaltas:%d \nNumero maximo de faltas:%d \nAulas comparecidas:%d \nAulas dadas:%d" ,faltas, faltas_max, aulas, aulas_dadas);
	}
}
