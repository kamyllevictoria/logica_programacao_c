#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void imprime(float m[6][7]){
	int i,j;
	//i = linha, funcionario
	//j = coluna, departamento
	for(i = 0; i < 6; i++){
		for(j = 0; j < 7; j++){
			printf("Matriz: %f", m[i][j]);
		}
	}
}

main(){
	float m[6][7], v[6];
	int i,j;
	for(i = 0; i < 6; i++){
		printf("Salario do departamento: %d", i);
		v[i] = 0;
		
		for(j = 0; j < 7; j++){
			printf("\nFuncionario %d: ",j);
			scanf("%f", &m[i][j]);
			v[i] += m[i][j];
		}
		v[i] = v[i]/7;
	}
	for( i = 0; i < 6; i++){
		for(j = 0; j < 7; j++){
			//pegamos apenas o vetor de i, que nao e multidimensional iggaul a nossa amtriz
			if(v[i] > 3000){
				m[i][j] *= 1.08;
			}
				else{
					m[i][j] *= 1.1;
				}
		}
		printf("\nMedia do departamento %d = %.2f,", i, v[i]);
	}
	printf("\n"); imprime(m); //chamamos a nossa função imprime matriz para que a mesma seja exibida
}

