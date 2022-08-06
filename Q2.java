package assignment_2b;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeMap;
class Address{
	int plot;
	String post;
}
public class Q2 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the size: ");
		int n=sc.nextInt();
		
		TreeMap<String, Address> a=new TreeMap<>();
		System.out.println("Enter the details: ");
		for(int i=1;i<=n;i++) {
			sc.nextLine();
			Address ad=new Address();
			System.out.println("\t\tFor Person "+i);
			System.out.print("Enter name: ");
			String name=sc.nextLine();
			System.out.print("Enter Plot number: ");
			ad.plot=sc.nextInt();
			System.out.print("Enter Post: ");
			ad.post=sc.nextLine();
			
			a.put(name, ad);
		}
		
		int i=1;
		for(String s: a.keySet()) {
			Address adx=a.get(s);
			System.out.println("Name: "+s);
			System.out.println("Plot number: "+adx.plot);
			System.out.println("Post: "+adx.post);
		}
	}
}