package if_else;

import java.util.Scanner;

public class IfSample {
	public static void main(String a[]) {
		System.out.println("Enter a number");
		Scanner s= new Scanner(System.in);
		
		float num=s.nextInt();
		if(num<0) {
			System.out.println("Number is negative");
		}else {
			System.out.println("Number is postive");
		}
	}

}
