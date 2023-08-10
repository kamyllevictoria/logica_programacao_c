#include <stdio.h>
int main() {
    int Atual;
    int Nascimento;
    int Idade;
    int IdadeM;
    int IdadeD;
    
    printf("Informe o ano atual: ");
    scanf("%d", &Atual);
    
    printf("Informe seu ano de nascimento: ");
    scanf("%d", &Nascimento);
    
    Idade = Atual - Nascimento;
    IdadeM = Idade * 12;
    IdadeD = Idade * 365;
    
    printf("Seus dados de idade: ");
    printf("\nAnos: %d", Idade);
    printf("\nMeses: %d", IdadeM);
    printf("\nDias: %d", IdadeD);
}

