#include <stdio.h>
#include <stdlib.h>
#include "operations.h"


int sumNumbers(int number1, int number2, int *result){
	if(number1 && number2){
		//Averiguar que es desreferenciar una variable
		*result = number1 + number2;
		return 0;
	}
	return -1;
}

int restNumbers(int number1, int number2, int *result){
	if(number1 && number2){
		*result = number1 - number2;
		return 0;
	}
	return -1;
}

int divideNumbers(int number1, int number2, float *result){
	if(number1 && number2 && number2 != 0){
		*result = number1 / number2;
		return 0;
	}
	return -1;
}

int multiplyNumbers(int number1, int number2, int *result){
	if(number1 && number2){
		*result = number1 * number2;
		return 0;
	}
	return -1;
}

int numberFactorial(int number, int *result){
	if(number){
		int i;
		float factorial;
		for(i = 1; i <= number; i++){
			factorial *= i;
		}
		*result = factorial;
		return 0;
	}
	return -1;
}
