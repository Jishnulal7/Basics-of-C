/*
 ============================================================================
 Name        : P29.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,num,sum=0;
	setbuf(stdout,NULL);
	printf("Enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(i%2==1){
		sum=i+sum;
		printf("+%d",i);}
	}printf("=%d",sum);
	return EXIT_SUCCESS;
}
