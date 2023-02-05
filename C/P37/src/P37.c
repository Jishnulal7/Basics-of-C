/*
 ============================================================================
 Name        : P37.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum(int,int);

int main(void){
	int a,b;
		printf("Enter 2 numbers");
		setbuf(stdout,NULL);
		scanf("%d%d",&a,&b);
		sum(a,b);
		return(0);


}
void sum(int n1,int n2){
	int b;
	b=n1+n2;
	printf("%d",b);

}
