import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // 정수 2개 입력
        int a = sc.nextInt();
        int b = sc.nextInt();

        if (a > b) {
            System.out.println(">");
        }
        else if (a == b) {
            System.out.println("==");
        }
        else {
            System.out.println("<");
        }
    }
}