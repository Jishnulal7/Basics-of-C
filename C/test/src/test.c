/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,a[3][3];
		setbuf(stdout,NULL);
		printf("enter values");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				scanf("%d",&a[i][j]);
				printf("%d\t",a[i][j]);
			}
		}printf("\n");
	return EXIT_SUCCESS;
}
