import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] sizes = new int[6];
        int T_min = 0, P_max = 0;
        int one_pen;

        for (int i = 0; i < 6; i++) {
            sizes[i] = sc.nextInt();
        }

        int T = sc.nextInt();
        int P = sc.nextInt();

        for (int i = 0; i < 6; i++) {

            if (sizes[i] != 0 ) {

                if (sizes[i] % T == 0) {
                    T_min += (sizes[i] / T);
                }
                else {
                    T_min += (sizes[i] / T) + 1;
                }
            }
        }

        System.out.println(T_min);

        P_max = N / P;
        one_pen = N % P;

        System.out.print(P_max + " " + one_pen);

    }
}