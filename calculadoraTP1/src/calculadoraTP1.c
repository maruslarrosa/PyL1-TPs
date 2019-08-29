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
#include "operations.h"

int getNumber( float *number1, float *number2);
int showMenu(float number1, float number2, char *operator);
void runOperation(float number1, float number2, char operator);


int main(void) {

	float number1, number2;
	char operator;
	printf("Bienvenide a la calculadora.\n");
	getNumber(&number1, &number2);

	while (operator != 'S') {
		showMenu(number1, number2, &operator);
		runOperation(number1, number2, operator);
	}
	printf("Adiós");
}

int getNumber( float *number1, float *number2){
	printf("Por favor, ingrese el primer operando: ");
	scanf("%f", number1);
	printf("Por favor, ingrese el segundo operando: ");
	scanf("%f", number2);
	if(number1 && number2){
		return 0;
	}
	return -1;
}

int showMenu(float number1, float number2, char *operator){
	printf("Los números seleccionados son: %f y %f \n", number1, number2);
	printf("Ingrese un operador (+ - * / !) o S para salir: \n");
	__fpurge(stdin);
	scanf("%c", operator);
	if(operator) {
		return 0;
	}
	return -1;
}

void runOperation(float number1, float number2, char operator){
	float result;
	switch(operator){
	case('+'):
		sumNumbers(number1, number2, &result);
		printf("El resultado de %f + %f es: %f \n",number1, number2, result);
		break;
	case('-'):
		restNumbers(number1, number2, &result);
		printf("El resultado de %f - %f es: %f \n",number1, number2, result);
		break;
	case('*'):
		multiplyNumbers(number1, number2, &result);
		printf("El resultado de %f * %f es: %f \n",number1, number2, result);
		break;
	case('/'):
		if (divideNumbers(number1, number2, &result) == 0){
			printf("El resultado de %f / %f es: %f \n",number1, number2, result);
		} else {
			printf("No es posible dividir por cero.\n");
		}
		break;
	case('!'):
		sumNumbers(number1, number2, &result);
		break;
	default:
		break;
	}
}
