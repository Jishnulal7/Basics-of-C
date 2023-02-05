/*
 ============================================================================
 Name        : P7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float number1,number2,sum;
		setbuf(stdout,NULL);
		printf("Enter 2 numbers");
		scanf("%f%f",&number1,&number2);
		sum=number1+number2;
		printf("Total sum is :%f",sum);
	return EXIT_SUCCESS;
}
