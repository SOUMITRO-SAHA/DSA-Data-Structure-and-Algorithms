import java.util.*;

public class Main {
    public static void main(String[] args) {
        System.out.println("Decimal to Binary ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        decimalToBinary(n);
    }

    // Binary to Decimal
    static void binaryToDecimal(int n) {
        int p = 0;
        int decimal = 0;
        while (n > 0) {
            int lastDigit = n % 10;
            decimal += lastDigit * (int) (Math.pow(2, p++));
            n /= 10;
        }
        System.out.println(decimal);
    }

    // Decimal to Binary
    static void decimalToBinary(int n) {
        int p = 0;
        int binary = 0;
        while (n > 0) {
            int lastDigit = n % 2;
            binary += lastDigit * (int) (Math.pow(10, p++));
            n /= 2;
        }
        System.out.println(binary);
    }
}
