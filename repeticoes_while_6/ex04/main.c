#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num, n, cont = 0;
    
    do {
        printf("Informe um n�mero: ");
        scanf("%d" ,&num);
    } while( num <= 0);
    
	for(n = 1; n <= num; n++){
		if(n % 2 != 0){
			cont += 1;
		}
	}
	printf("\nTotal de n�meros �mpares de 1 at� %d: %d", num, cont);
}


