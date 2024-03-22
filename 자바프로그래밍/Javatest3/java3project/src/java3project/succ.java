package java3project;

import java.util.Scanner;

public class succ {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("점수를 입력하세요");
		Scanner sc = new Scanner(System.in);
		int 점수 = sc.nextInt();
		if(점수 > 80) {
			System.out.print("합격");
		}
		else {
			System.out.print("나가인마");
		}
	}

}
