/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char  name;
		setbuf(stdout,NULL);
		printf("Enter the name");
		scanf("%c",&name);
		printf("The name is :%c",name);
	return EXIT_SUCCESS;
}
