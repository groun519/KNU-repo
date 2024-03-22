package java3project;
import java.util.Scanner;

public class ScannerEx {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("이름과 분반을 넣으세요");
		Scanner scanner = new Scanner(System.in);
		String name = scanner.next();
		int 분반 = scanner.nextInt();
		System.out.println("이름은 " + name + "이고 분반은 " + 분반 + "입니다.");
	}

}
