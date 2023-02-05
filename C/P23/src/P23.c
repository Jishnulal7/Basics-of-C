/*
 ============================================================================
 Name        : P23.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
		for(i=1;i<5;i++){
			printf("Hi \n");
			if(i==3){
				continue;
			}printf("Hello\n");
		}printf("Finished \n");


	return EXIT_SUCCESS;
}
