import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();

        System.out.println(A + B - C);
        int logB = (int)Math.log10(B) + 1;
        System.out.println(A*(int)Math.pow(10, logB) + B - C);
    }
}