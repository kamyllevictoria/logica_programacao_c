#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a,b,c; //resultam em expressoes logicas, sendo 0 para false e 1 para true,
void main(void) {
	a = 3; 
	b= 2;
	c = 7;
	printf("%d", a>b); //retorna 1, pois a � maior do que b em 1 unidade
	printf("\n%d", a==0); //retorna 0, � falso
	printf("\n%d" , a> b || a == 0); //retorna 1, pois na condi��o || (ou) basta existir uma situa��o verdadeira para todas as outras serem verdadeiras.
	printf("\n%d" , a < c && c == b); //retorna 0, pois na condi�ao && (e) basta existir uma situa��o falsa para que todas as outras sejam falsas.
}
