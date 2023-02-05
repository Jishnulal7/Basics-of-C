/*
 ============================================================================
 Name        : P36.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum();
int main(void) {
	sum();
	return(0);
}
void sum(){
	int a,b,c;
	printf("Enter 2 numbers");
	setbuf(stdout,NULL);
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum is %d:",c);
}
