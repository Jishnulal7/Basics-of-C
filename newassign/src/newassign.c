/*
 ============================================================================
 Name        : newassign.c
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
		printf("enter the mark in percentage");
		scanf("%f",&mark);
		if(mark>90){
			printf("Grade=A");}
		else if(mark>80){
			printf("Grade=B");}
	    else if(mark>70){
			printf("Grade=C");
		}else if(mark>60){
			printf("Grade=D");
		}else if(mark>50){
			printf("Grade==E");
		}else{
			printf("Failed");}
	return EXIT_SUCCESS;
}
