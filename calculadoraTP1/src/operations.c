#include <stdio.h>
#include <stdlib.h>
#include "operations.h"


int sumNumbers(int number1, int number2){
	int result;
	if(number1 && number2){
		result = number1 + number2;
		printf("El resultado de %d + %d es: %d \n",number1, number2, result);
		return 0;
	}
	return -1;
}

int restNumbers(int number1, int number2){
	int result;
	if(number1 && number2){
		result = number1 - number2;
		printf("El resultado de %d - %d es: %d \n",number1, number2, result);
		return 0;
	}
	return -1;
}

int divideNumbers(int number1, int number2){
	float result;
	if(number1 && number2 && number2 != 0){
		result = number1 / number2;
		printf("El resultado de %d + %d es: %f \n",number1, number2, result);
		return 0;
	} else {
		printf("No es posible dividir por cero.\n");
	}
	return -1;
}

int multiplyNumbers(int number1, int number2){
	int result;
	if(number1 && number2){
		result = number1 * number2;
		printf("El resultado de %d * %d es: %d \n",number1, number2, result);
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
		printf("El resultado de !%d es: %d \n", number, factorial);
		return 0;
	}
	return -1;
}
