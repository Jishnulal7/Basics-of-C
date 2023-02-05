/*
 ============================================================================
 Name        : Asasasadsa4.c
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
		printf("Enter number from 1 to 7 ");
		scanf("%d",&week);
		switch(week){
		case 1:
		printf("Monday");
		break;
		case 2:
		printf("Tuesday");
		break;
		case 3:
		printf("wednesday");
		break;
		case 4:
		printf("Thusrday");
		break;
		case 5:
		printf("Friday");
		break;
		case 6:
		printf("saturday");
		break;
		case 7:
		printf("sunday");
		break;
		default:
		printf("No input");
		}
	return EXIT_SUCCESS;
}
