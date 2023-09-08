#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int caderno, materias, total;
	printf("How many books do you have? ");
	scanf("%d" ,&caderno);
	printf("Nice, and how many subjects they have? ");
	scanf("%d" ,&materias);
	total = caderno * materias;
	printf("Good! So, you have %d subjects to use during the university!" ,total);
}
