/*
 ============================================================================
 Name        : eg.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int marks,i;
	    /* Read student marks */
	    printf("Enter the marks (in percentage ) of Student:");
	    scanf("%d",&marks);
	    /* display result */
	    if(marks < 40)
	    {
	        for(i=0;i<40;i++)
	        printf("_");printf("\n\n");
	        printf("Result = Failed\n");
	        for(i=0;i<40;i++)
	        printf("_");printf("\n\n");
	    }
	    else
	    {
	        for(i=0;i<40;i++)
	        printf("_");printf("\n\n");
	        printf("Result = Passed\n");
	        for(i=0;i<40;i++)
	        printf("_");printf("\n\n");
	    }
	    system("pause");
	return EXIT_SUCCESS;
}
