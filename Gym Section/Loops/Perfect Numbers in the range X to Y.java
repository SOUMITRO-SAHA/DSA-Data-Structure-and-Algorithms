import java.util.*;

public class Main {
    static boolean isPerfect(int n)
    {
        // To store sum of divisors
        int sum = 1;

        // Find all divisors and add them
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i==0)
            {
                if(i * i != n)
                    sum = sum + i + n / i;
                else
                    sum += i;
            }
        }
        return sum == n && n != 1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        for (int i = a; i <= b; i++) {
            if(isPerfect(i))
                System.out.println(i);
        }

    }
}
