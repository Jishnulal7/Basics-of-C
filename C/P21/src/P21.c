/*
 ============================================================================
 Name        : P21.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit=6,j;
	for(i=1;i<limit;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
