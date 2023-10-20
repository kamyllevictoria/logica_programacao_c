#include <stdio.h>
#include <stdlib.h>

int main() {
    float preco, total = 0.0;
    int cont = 0;

    while (cont < 3) {
        do {
            printf("Informe o valor do produto: ");
            scanf("%f", &preco);
        } while (preco <= 0);
        
        if (preco >= 150) {
            preco *= 0.95;
        }
        
        total += preco;
        cont++;
    }
    
    printf("\nMedia: %.2f", total / cont);
    
    return 0;
}

