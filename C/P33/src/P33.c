/*
 ============================================================================
 Name        : P33.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,a[100],n,searchKey,flag=0;
			setbuf(stdout,NULL);
			printf("Enter limit");
			scanf("%d",&n);

			printf("Enter the values ");
			for(i=0;i<n;i++){
				scanf("%d",&a[i]);
			}

			printf("Please enter the search key");
			scanf("%d",&searchKey);

			for(i=0;i<n;i++){
				if(searchKey==a[i]){
							flag=1;
							break;}
			}

			if (flag==1){
					printf("value found at position %d", i+1);
			}else{
				printf("value not found");
			}
	return EXIT_SUCCESS;
}
