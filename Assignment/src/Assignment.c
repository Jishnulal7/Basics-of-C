/*
 ============================================================================
 Name        : Assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char chr="q";
	setbuf(stdout,NULL);
	printf("Enter the letter");
	scanf("%c", &chr);
	printf("you have entered: %c",chr);




	return EXIT_SUCCESS;
}
