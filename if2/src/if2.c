/*
 ============================================================================
 Name        : if2.c
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
	int b;
	setbuf(stdout,NULL);
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("Greatest number is %d",a);
	}else {
		printf("Greatest number is %d",b");
	}



	return EXIT_SUCCESS;
}
