#include<stdio.h>
main(){
	float N1;
	float N2;
	float N3;
	float M;
	float M1;
	float M2;
	float M3;
	printf("Inform your first note: ");
	scanf("%f" ,&N1);
	scanf("%f" ,&N2);
	scanf("%f" ,&N3);
	M = (N1 + N2 + N3)/3;
	N1 = (M * 0.2);
	N2 = (M * 0.35);
	N3 = (M * 0.45);
	printf("Your final media is: %.2f" ,M);
	printf("\nThe percentage of your first grade, in the final average, equals a total of: %.2f" ,N1);
	printf("\nThe percentage of your second grade, in the final avarage, equals a total of: %.2f" ,N2);
	printf("\nThe percentage of your third grade, in the final avarage, equals a total of: %.2f" ,N3);
	}
