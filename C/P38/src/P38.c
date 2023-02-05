/*
 ============================================================================
 Name        : P38.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int,int);

int main(void){
	int a,b,c;
		printf("Enter 2 numbers");
		setbuf(stdout,NULL);
		scanf("%d%d",&a,&b);
		c=sum(a,b);
		printf("%d",c);
		return(0);
}

int sum(int n1,int n2){
	int b;
	b=n1+n2;
	return b;

}

