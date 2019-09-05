#include <stdio.h>
#include <stdlib.h>
#include "operations.h"


int sumNumbers(int number1, int number2){
	int returnValue = -1;
	int validNumbers = (number1*2/2) == number1 && (number2*2/2) == number2;
	if(validNumbers){
		printf("El resultado de %d + %d es: %d \n\n",number1, number2, number1+number2);
		returnValue = 0;
	}
	return returnValue;
}

int restNumbers(int number1, int number2){
	int returnValue = -1;
	int validNumbers = (number1*2/2) == number1 && (number2*2/2) == number2;
	if(validNumbers){
		printf("El resultado de %d - %d es: %d \n\n",number1, number2, number1 - number2);
		returnValue = 0;
	}
	return returnValue;
}

int divideNumbers(int number1, int number2){
	int returnValue = -1;
	int validNumbers = (number1*2/2) == number1 && (number2*2/2) == number2;
	if(validNumbers && number2 != 0){
		float result = (double)number1 / (double)number2;
		printf("El resultado de %d / %d es: %f \n\n",number1, number2, result);
		returnValue = 0;
	} else {
		printf("No es posible dividir por cero.\n\n");
	}
	return returnValue;
}

int multiplyNumbers(int number1, int number2){
	int returnValue = -1;
	int validNumbers = (number1*2/2) == number1 && (number2*2/2) == number2;
	if(validNumbers){
		printf("El resultado de %d * %d es: %d \n\n",number1, number2, number1 * number2);
		returnValue = 0;
	}
	return returnValue;
}

int numberFactorial(int number){
	int returnValue = -1;
	int validNumber = (number*2/2) == number;
	if(validNumber){
		int i;
		int factorial = 1;
		for(i = 1; i <= number; i++){
			factorial *= i;
		}
		printf("El resultado de !%d es: %d \n\n", number, factorial);
		returnValue = 0;
	}
	return returnValue;
}

