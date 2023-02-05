/*
 ============================================================================
 Name        : P3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c,avg;
	setbuf(stdout,NULL);
	printf("enter 3 numbers");
	scanf("%f%f%f",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("Avg of 3 numbers is : %f",avg);
	return EXIT_SUCCESS;
}
