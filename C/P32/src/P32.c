/*
 ============================================================================
 Name        : P32.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,sum=0,n,a[20];
		setbuf(stdout,NULL);
		printf("Enter the limit");
		scanf("%d",&n);
		printf("Enter the values ");
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}



		for(i=0;i<n;i++){
			sum=sum+a[i];
		}printf("%d",sum);
	return EXIT_SUCCESS;
}
