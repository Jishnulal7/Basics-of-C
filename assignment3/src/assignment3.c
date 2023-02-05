/*
 ============================================================================
 Name        : assignment3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int mark;
		setbuf(stdout,NULL);
		printf("Enter the mark");
		scanf("%d",&mark);
		if (mark<0 || mark>100){
			printf("wrong input");
		}else if(mark<50){
			    printf("Grade=F");
			   }else if(mark>=50 && mark<60){
			   printf("Grade=D");
		}else if(mark>=60 && mark<70){
		    printf("Grade=C");
		}else if(mark>=70 && mark<80){
		    printf("Grade=B");
		}else if(mark>=80 && mark<90){
		    printf("Grade=A");
		}else {
		    printf("Grade=A+");
		}
	return EXIT_SUCCESS;
}
