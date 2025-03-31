import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();

        int b = B;
        int digits = 0;
        int a= A;

        while (b != 0) {
            b /= 10;
            digits++;
        }

        for (int i = 0; i < digits; i++) {
            a *= 10;
        }

        System.out.println(A + B - C);
        System.out.println(a + B - C);


    }
}