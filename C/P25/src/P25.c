/*
 ============================================================================
 Name        : P25.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,j;
	setbuf(stdout,NULL);
	printf("Enter Desired row");
	scanf("%d",&limit);
	for(i=limit;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}printf("\n");
	}




	return EXIT_SUCCESS;
}
