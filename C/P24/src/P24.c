/*
 ============================================================================
 Name        : P24.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit=20;
	for(i=1;i<=limit;i++){
		if(i%2==1){
			printf("%d \n",i);
		}
	}
	return EXIT_SUCCESS;
}
