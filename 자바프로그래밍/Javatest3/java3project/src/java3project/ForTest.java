package java3project;

public class ForTest {
	
	int j;

	public static void main(String[] args) {
		
		int sum = 0;
		
		for(int i = 0; i < 10; i++ , System.out.println("a")) {
			sum = i + sum + 1;
		}
		System.out.println(sum);
	}
}
