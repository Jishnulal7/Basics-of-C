/*
 ============================================================================
 Name        : P10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("Greater number is :%d",a);
	}else{
		printf("Greater number is :%d",b);
	}

	return EXIT_SUCCESS;
}
