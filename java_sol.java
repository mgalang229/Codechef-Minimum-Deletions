import java.io.*;
import java.util.*;

public class Main {
	static int GCD(int n1, int n2) {
		int gcd = 1;
		for (int i = 1; i <= n1 && i <= n2; i++) {
			if (n1 % i == 0 && n2 % i == 0) {
				gcd = i;
			}
		}
		return gcd;
	}
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int tt = in.nextInt();
		for (int qq = 1; qq <= tt; qq++) {
			int n = in.nextInt();
			int[] a = new int[n];
			for (int i = 0; i < n; i++) {
				a[i] = in.nextInt();
			}
			int tmp = a[0];
			for (int i = 1; i < n; i++) {
				tmp = GCD(tmp, a[i]);
			}
			System.out.println(tmp == 1 ? 0 : -1);
		}
	}
}
