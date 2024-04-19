package java3project;
import java.util.Scanner; 

public class SumMaker {

	public static void main(String[] args) {
		int[] a = { 0, 0, 0, 0, 0 };
		int sum = 0;
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("정수를 5개 입력하세요.");
		
		for(int i = 0; i < 5; i++) {
			a[i] = scanner.nextInt();
			if(a[i] > 0) sum += a[i];
		}
		
		System.out.print("양수의 합은 ");
		System.out.print(sum);
	}

}
