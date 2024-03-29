package java3project;

import java.util.Scanner;

public class WhileTest {

	public static void main(String[] args) {
		
		int n = 0, sum = 0;
		Scanner scanner = new Scanner(System.in);
		
		while(n != -1) {
			n = scanner.nextInt();
			sum += n;
		}
		System.out.print(sum);
	}

}
