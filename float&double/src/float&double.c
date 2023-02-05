/*
 ============================================================================
 Name        : float&double.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float a;
	double b;
	setbuf(stdout,NULL);
	printf("Enter a number");
	scanf("%f",&a);
	printf("Enter another number");
	scanf("%lf",&b);
	printf("a %f",a);
	printf("b %lf",b);



	return EXIT_SUCCESS;
}
