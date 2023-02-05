/*
 ============================================================================
 Name        : hotel.c
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
			printf("1 for porotta\n2 for biriyani\n3 for chappathi\n4 for rice\nEnter your choice" );
			scanf("%d",&choice);
			switch(choice){
			case 1:
			printf("you have selected porotta");
			break;
			case 2:
				printf("you have selected biryani");
				break;
			case 3:
				printf("you have selected chappathi");
				break;
			case 4:
				printf("you have selected rice");
				break;
			default:
				printf("no result");
			}
	return EXIT_SUCCESS;
}
