/*
 ============================================================================
 Name        : PrimenNmber.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n=10,flag=0;
	setbuf(stdout,NULL);
	for(i=2;i<n/2;i++){
		if(n%2==0){
			flag=1;
			break;
		}
	}if (flag==0){
		printf("Prime number");
	}else{
		printf("Non-Prime");
	}
	return EXIT_SUCCESS;
}
