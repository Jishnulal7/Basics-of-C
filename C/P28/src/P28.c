/*
 ============================================================================
 Name        : P28.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,num,sum;
	setbuf(stdout,NULL);
	printf("Enter a number");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		sum=i*num;
		printf("%d*%d=%d\n",i,num,sum);
	}

	return EXIT_SUCCESS;
}
