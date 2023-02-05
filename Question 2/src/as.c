/*
 ============================================================================
 Name        : as.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int a;
	float b,sum;
	setbuf(stdout,NULL);
	printf("Enter the 2 numbers");
	scanf("%d%f",&a,&b);
	sum=a+b;
	printf("Result is:%f",sum);




	return EXIT_SUCCESS;
}
