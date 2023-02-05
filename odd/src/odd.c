/*
 ============================================================================
 Name        : odd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit=100;
	setbuf(stdout,NULL);
	for(i=1;i<=limit;i++){
		if(i%1==1){
			printf("%d",i);
		}
	}
	return EXIT_SUCCESS;
}
