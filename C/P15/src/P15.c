/*
 ============================================================================
 Name        : P15.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("Enter your score");
	scanf("%f",&mark);
	if(mark>100){
		printf("You have entered wrong input");
	}else if(mark>90){
		printf("Grade is A");
	}else if(mark>=80 && mark<=89){
		printf("Grade is B");
	}else if(mark>=70 && mark<=79){
		printf("Grade is C");
	}else if(mark>=60 && mark<=69){
		printf("Grade is D");
	}else if(mark>=50 && mark<=59){
		printf("Grade is E");
	}else{
		printf("Failed");
	}
	return EXIT_SUCCESS;
}
