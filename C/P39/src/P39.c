/*
 ============================================================================
 Name        : P39.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int sum();

int main(void){
	int k;
	k=sum();
	printf("%d",k);

}
int sum(){
	int a,b,c;
	printf("Enter 2 values");
	scanf("%d%d",&a,&b);
	setbuf(stdout,NULL);
	c=a+b;
	return c;
}
