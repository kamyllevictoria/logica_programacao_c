#include <stdio.h>
#include <string.h>

main() {
    char frase[100];
    int i, tam;
    
    printf("\nDigite uma frase e a veja invertida: "); 
    fflush(stdin); 
    //gets(frase);
    fgets(frase,sizeof(frase),stdin);
    tam = strlen(frase); 
    
    char inv[tam + 1]; 
    //criamos novo array para frase invertida
	//usamos o tam + 1 para paramos no tamanho 20, e nao na posição 20, pois a posição 0 é contada, logo, teriamos o tamanho de 21 e nao 20 
	//para a reversão, adicionamos o valor de i e regredimos o valor de j;
    int j = tam - 1;
    
    for (i = 0; i < tam; i++, j--) {
        inv[j] = frase[i];
    }
    
    inv[tam] = '\0';
    
    printf("\nA frase invertida e dada por: %s", inv);
}

