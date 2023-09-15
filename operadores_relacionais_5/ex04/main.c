#include <stdio.h>

int main() {
    float vb;
    int curso, nivel;
    
    printf("Qual e o valor base dos cursos de lingua estrangeira? ");
    scanf("%f", &vb);
    
    printf("Informe qual curso deseja realizar: \n\t1-Ingles \n\t2-Espanhol \n\t3-Frances \n(1-3)");
    scanf("%d", &curso);
    
    printf("\nNivel do curso: \n\t1-Intermediario \n\t2-Avancado");
    scanf("%d", &nivel);
    
    if (curso == 1 && nivel == 1)
		{
	        printf("Curso: Ingles \nCusto: R$%.2f", vb * 1.1);
	    } 
		else if (curso == 1 && nivel == 2)
			{
		        printf("Curso: Ingles \nCusto: R$%.2f", vb * 1.2);
		    } 
			else if (curso == 2 && nivel == 1)
				{
			        printf("Curso: Espanhol \nCusto: R$%.2f", vb * 1.05);
			    } 
				else if (curso == 2 && nivel == 2)
					{
				        printf("Curso: Espanhol \nCusto: R$%.2f", vb * 1.08);
				    } 
					else if (curso == 3 && nivel == 1)
						{
					        printf("Curso: Frances \nCusto: R$%.2f", vb * 1.15);
					    } 
						else if (curso == 3 && nivel == 2)
							{
						        printf("Curso: Frances \nCusto: R$%.2f", vb * 1.22);
					    }
    						else{
    							printf("Opcao inexistente.");
							}
}

