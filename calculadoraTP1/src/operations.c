#include <stdio.h>
#include <stdlib.h>
#include "operations.h"


int sumNumbers(int number1, int number2){
	//int result;
	int returnValue = -1;
	int validNumbers = (number1*2/2) == number1 && (number2*2/2) == number2;
	if(validNumbers){
		//result = number1 + number2;
		printf("El resultado de %d + %d es: %d \n\n",number1, number2, number1+number2);
		returnValue = 0;
	}
	return returnValue;
}

int restNumbers(int number1, int number2){
	int result;
	if(number1 && number2){
		result = number1 - number2;
		printf("El resultado de %d - %d es: %d \n\n",number1, number2, result);
		return 0;
	}
	return -1;
}

int divideNumbers(int number1, int number2){
	float result;
	if(number1 && number2 && number2 != 0){
		result = (double)number1 / (double)number2;
		printf("El resultado de %d / %d es: %f \n\n",number1, number2, result);
		return 0;
	} else {
		printf("No es posible dividir por cero.\n\n");
	}
	return -1;
}

int multiplyNumbers(int number1, int number2){
	int result;
	if(number1 && number2){
		result = number1 * number2;
		printf("El resultado de %d * %d es: %d \n\n",number1, number2, result);
		return 0;
	}
	return -1;
}

int numberFactorial(int number){
	if(number){
		int i;
		int factorial = 1;
		for(i = 1; i <= number; i++){
			factorial *= i;
		}
		printf("El resultado de !%d es: %d \n\n", number, factorial);
		return 0;
	}
	return -1;
}

//Esto es sólo visible al scope del source file que lo contiene.
//Esta función
static int
