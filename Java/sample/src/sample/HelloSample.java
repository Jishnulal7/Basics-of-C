package sample;

import java.util.Scanner;

public class HelloSample {
	public static void main(String ar[]) {
		
		  System.out.println("Enter 2 number");
		  
		  Scanner s=new Scanner(System.in);  //like scanf
		  
		  int a=s.nextInt();  //value from user
		  int b=s.nextInt();
		  
		  int c=a+b;
		  System.out.println("Result"+c);  
	}

}
