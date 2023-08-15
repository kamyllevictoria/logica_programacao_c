#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char name[15];
char sex;
int age;
float salary;

void main() {
	printf("What is your name? ");
	scanf("%s" ,&name);
	
	printf("And your gender? ");
	scanf("%s" ,&sex);
	
	printf("How old are you? ");
	scanf("%d" ,&age);
	
	printf("What is your dream salary? ");
	scanf("%f" ,&salary);
	
	printf("\nName: %s" ,name);
	printf("\nAge: %d" ,age);
	printf("\nGender: %c" ,sex);
	printf("\nDream salary: %.2f" ,salary);
}
