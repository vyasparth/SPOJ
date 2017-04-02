import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
	
	Scanner scan = new Scanner(System.in);
	
	int t = scan.nextInt();
	
	while(t != 0) {
		
		int N = scan.nextInt();
		int p = scan.nextInt();
		
		System.out.println(p == 0 ? "Airborne wins.":"Pagfloyd wins." );
		
		t--;
	}
	
	}
}
