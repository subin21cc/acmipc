import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();

        int mo = 1;
        int ja_1 = 1;
        int ja_2 = 1;

        for (int i = 1; i <= N; i++) {
            mo *= i;
        }

        for (int i = 1; i <= N - K; i++) {
            ja_1 *= i;
        }

        for (int i = 1; i <= K; i++) {
            ja_2 *= i;
        }

        System.out.println(mo / (ja_1 * ja_2));

    }
}