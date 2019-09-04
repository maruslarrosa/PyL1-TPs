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

#define SUCCESS 0
#define ERROR -1

int getNumber( int *number1, int *number2);
int showMenu(int number1, int number2, char *operator);
int validOperator(char operator);
void runOperation(int number1, int number2, char operator);


int main(void) {

	int number1, number2;
	char operator;
	printf("Bienvenide a la calculadora.\n");
	if (getNumber(&number1, &number2) == SUCCESS){
		while (operator != 'S') {
			if (showMenu(number1, number2, &operator) == SUCCESS){
				runOperation(number1, number2, operator);
			} else {
				printf("Ocurrió un error al realizar la operación.\n");
			}
		}
	} else {
		printf("Ocurrió un error al solicitar los números.\n");
	}
	printf("Adiós");
}

int getNumber( int *number1, int *number2){
	int status = -1;
	int _number1, _number2;

	printf("Por favor, ingrese el primer operando: ");
	while (scanf("%d", &_number1) != 1){
		__fpurge(stdin);
		printf("Valor Incorrecto.\nPor favor, ingrese el primer operando: ");
	}
	printf("Por favor, ingrese el segundo operando: ");
	while (scanf("%d", &_number2) != 1){
		__fpurge(stdin);
		printf("Valor Incorrecto.\nPor favor, ingrese el segundo operando: ");
	}

	if(_number1 && _number2){
		*number1 = _number1;
		*number2 = _number2;
		status = 0;
	}
	return status;
}

int showMenu(int number1, int number2, char *operator){
	int status = -1;
	char _operator;
	printf("Los números seleccionados son: %d y %d \n", number1, number2);
	printf("Ingrese un operador (+ - * / !) o S para salir: \n");
	__fpurge(stdin);
	scanf("%c", &_operator);
	while (validOperator(_operator) != 0){
		__fpurge(stdin);
		printf("Valor Incorrecto.\nPor favor, ingrese un operador (+ - * / !) o S para salir: \n ");
		scanf("%c", &_operator);
	}
	__fpurge(stdin);
	if(_operator) {
		*operator = _operator;
		status = 0;
	}
	return status;
}

int validOperator(char operator){
	int returnValue = -1;
	if(operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '!'){
		returnValue = 0;
	}
	return returnValue;
}

void runOperation(int number1, int number2, char operator){
	switch(operator){
	case('+'):
		sumNumbers(number1, number2);
		break;
	case('-'):
		restNumbers(number1, number2);
		break;
	case('*'):
		multiplyNumbers(number1, number2);
		break;
	case('/'):
		if (number2 != 0){
			divideNumbers(number1, number2);
		} else {
			printf("No es posible dividir por cero.\n");
		}
		break;
	case('!'):
		numberFactorial(number1);
		break;
	default:
		break;
	}
}
