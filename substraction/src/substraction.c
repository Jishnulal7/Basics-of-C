/*
 ============================================================================
 Name        : substraction.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,sub;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	sub=a-b;
	printf("result is :%d",sub);




	return EXIT_SUCCESS;
}
