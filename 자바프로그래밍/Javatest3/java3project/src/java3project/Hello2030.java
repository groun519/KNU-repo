package java3project;

public class Hello2030 {

	public static void main(String[] args) {
		int n = 2030;
		System.out.println("헬로"+n);
		
		Hello b = new Hello(); // new 연산자. 생성자.
		
		delete b; // 메모리에서 제거. 소멸자.
	}
}
