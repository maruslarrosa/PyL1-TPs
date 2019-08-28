/*
 ============================================================================
 Name        : calculadoraTP1.c
 Author      : Marilina Larrosa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>

int getNumber( int *number1, int *number2);
int showMenu(int number1, int number2, char *operator);

int main(void) {

	int number1, number2;
	char operator;
	printf("Bienvenide a la calculadora.\n");
	getNumber(&number1, &number2);

	while (operator != 'S') {
		showMenu(number1, number2, &operator);
	}
	printf("Adiós");
}

int getNumber( int *number1, int *number2){
	printf("Por favor, ingrese el primer operando: ");
	scanf("%d", number1);
	printf("Por favor, ingrese el segundo operando: ");
	scanf("%d", number2);
	if(number1 && number2){
		return 0;
	}
	return -1;
}

int showMenu(int number1, int number2, char *operator){
	printf("Los números seleccionados son: %d y %d \n", number1, number2);
	printf("Ingrese un operador (+ - * / !) o S para salir:");
	__fpurge(stdin);
	scanf("%c", operator);
	if(operator) {
		return 0;
	}
	return -1;
}

