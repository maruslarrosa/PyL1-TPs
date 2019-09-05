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
#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>
#include "operations.h"

#define SUCCESS 0
#define ERROR -1

int getNumber( int *number1, int *number2);
int showMenu(int number1, int number2, char *operator);
int validOperator(char operator);
int runOperation(int number1, int number2, char operator);


int main(void) {

	int number1, number2;
	char operator;
	printf("Bienvenide a la calculadora.\n");
	if (getNumber(&number1, &number2) == SUCCESS){
		while (operator != 'S') {
			if (showMenu(number1, number2, &operator) == SUCCESS){
				if(operator != 'S' && runOperation(number1, number2, operator) == ERROR){
					printf("Ocurrió un error al realizar la operación.\n");
				}
			} else {
				printf("Ocurrió un error al solicitar la operación.\n");
			}
		}
	} else {
		printf("Ocurrió un error al solicitar los números.\n");
	}
	printf("Adiós");
	return 0;
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

	int validNumbers = (_number1*2/2) == _number1 && (_number2*2/2) == _number2;
	if(validNumbers){
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
	printf("Ingrese la operación que desea realizar, o S para salir: \n");
	printf("a) Calcular la suma (%d + %d)\n", number1, number2);
	printf("b) Calcular la resta (%d - %d)\n", number1, number2);
	printf("c) Calcular la division (%d / %d)\n", number1, number2);
	printf("d) Calcular la multiplicacion (%d * %d)\n", number1, number2);
	printf("e) Calcular el factorial (!%d y !%d)\n", number1, number2);
	__fpurge(stdin);
	scanf("%c", &_operator);
	while (validOperator(_operator) != 0){
		__fpurge(stdin);
		printf("Valor Incorrecto.\n"
				"Por favor, ingrese la operación que desea realizar o S para salir: \n ");
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
	if(operator == 'a'
		|| operator == 'b'
		|| operator == 'c'
		|| operator == 'd'
		|| operator == 'e'
		|| operator == 'S')
	{
		returnValue = 0;
	}
	return returnValue;
}

int runOperation(int number1, int number2, char operator){
	int returnValue = -1;
	switch(operator){
	case('a'):
		if(sumNumbers(number1, number2) == 0){
			returnValue = 0;
		}
		break;
	case('b'):
		if(restNumbers(number1, number2) == 0){
			returnValue = 0;
		}
		break;
	case('c'):
		if(divideNumbers(number1, number2) == 0){
			returnValue = 0;
		}
		break;
	case('d'):
		if(multiplyNumbers(number1, number2) == 0){
			returnValue = 0;
		}
		break;
	case('e'):
		if(numberFactorial(number1) == 0 && numberFactorial(number2) == 0){
			returnValue = 0;
		}
		break;
	default:
		break;
	}
	return returnValue;
}
