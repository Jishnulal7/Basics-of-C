/*
 ============================================================================
 Name        : P12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n1,n2,choice,result;
		setbuf(stdout,NULL);
		printf("Enter 2 numbers");
		scanf("%d%d",&n1,&n2);
		printf("1 for addition \n2 for subtraction \n3 for multiplication \n4 for division \n Select choice");
		scanf("%d",&choice);
		if(choice==1){
			result=n1+n2;
			printf("result is %d",result);
		}else if(choice==2){
			result=n1-n2;
			printf("result is %d",result);
		}else if(choice==3){
			result=n1*n2;
			printf("result is %d",result);
		}else if(choice==4){
			result=n1/n2;
			printf("result is %d",result);
		}else{
			printf("Not defined ");
		}
		printf("Result is :%d",result);
	return EXIT_SUCCESS;
}
