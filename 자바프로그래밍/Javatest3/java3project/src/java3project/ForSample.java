package java3project;

public class ForSample {

	public static void main(String[] args) {
		
		int sum = 0;

		for(int i = 0; i < 10; i++) {
			System.out.print(i+1);
			
			sum += i+1;
			
			if(i == 9) 
				System.out.print("=");
			else
				System.out.print("+");
		}
		System.out.print(sum);
	}

}
