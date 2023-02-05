/*
 ============================================================================
 Name        : P16.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int week;
	setbuf(stdout,NULL);
	printf("Enter number from 1 to 7");
	scanf("%d",&week);
	switch(week){
	case 1:
		printf("Today is sunday");
		break;
	case 2:
		printf("Today is Monday");
		break;
	case 3:
		printf("Today is Tuesday");
		break;
	case 4:
		printf("Today is wednesday");
		break;
	case 5:
		printf("Today is thursday");
		break;
	case 6:
		printf("Today is friday");
		break;
	case 7:
		printf("Today is saturday");
		break;
	default:
		printf("Invalid entry");
	}

	return EXIT_SUCCESS;
}
