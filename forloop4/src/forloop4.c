/*
 ============================================================================
 Name        : forloop4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers
int main(void) {
	int i,n,sum=0;
	setbuf(stdout,NULL);
	printf("Enter a Positive integer");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		sum=sum+i;
	}printf("Result is %d",sum);
	return EXIT_SUCCESS;
}
