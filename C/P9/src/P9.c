/*
 ============================================================================
 Name        : P9.c
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
		setbuf(stdout,NULL);
		printf("Enter a number");
		scanf("%d",&a);
		if(a<0){
			printf("Number is negative");
		}else{
			printf("Number is positive");
		}
	return EXIT_SUCCESS;
}
