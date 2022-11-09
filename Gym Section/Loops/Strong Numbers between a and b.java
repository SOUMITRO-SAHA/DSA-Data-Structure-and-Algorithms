import java.util.*;

public class Main {
    // Store the factorial of all the digits from [0, 9]
    static int[] factorial = {1, 1, 2, 6, 24, 120,
            720, 5040, 40320, 362880};

    static boolean isStrong(int n) {
        //Converting n to String so that can easily access all it's digit.
        String no = Integer.toString(n);
        int sum = 0;

        for (int i = 0; i < no.length(); i++) {
            sum += factorial[Integer.parseInt(no.charAt(i)+"")];
        }

        return sum == n;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        for (int i = a; i <= b; i++) {
            if (isStrong(i))
                System.out.print(i + " ");
        }
        System.out.println();
    }
}
