/*
 ============================================================================
 Name        : calculadoraTP1.c
 Author      : Marilina Larrosa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int getNumber( int *number1, int *number2);

int main(void) {

	int number1, number2;
	printf("Bienvenide a la calculadora.\n");
	getNumber(&number1, &number2);
}

int getNumber( int *number1, int *number2){
	printf("Por favor, ingrese el primer operando: ");
	scanf("%d", &number1);
	printf("Por favor, ingrese el segundo operando: ");
	scanf("%d", &number2);
	if(number1 && number2){
		return 0;
	}
	return -1;
}
