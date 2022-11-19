import java.util.*;

public class Main {
    static boolean palindrome(int x) {
        int a = x;
        int res = 0;
        while (a > 0) {
            int last = a % 10;
            res = res * 10 + last;
            a /= 10;
        }
        return (res == x) ? true : false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        for (int i = a; i <= b; i++) {
            if (palindrome(i))
                System.out.println(i);
        }
    }
}
