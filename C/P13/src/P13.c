/*
 ============================================================================
 Name        : P13.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);
	printf("1 for Mandhi \n2 for biriyani \n3 for Fried rice \n4 for Meals");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("You have selected Mandhi");
		break;
	case 2:
		printf("You have selected Biriyani");
		break;
	case 3:
		printf("You have selected Fried rice");
		break;
	case 4:
		printf("You have selected Meals");
		break;
	default:
		printf("LoL");

	}
	return EXIT_SUCCESS;
}
