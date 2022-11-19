import java.util.*;

public class Decimal_To_Binary___Binary_To_Decimal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // binaryToDecimal();
        decimalToBinary(n);
    }

    // Binary to Decimal
    static void binaryToDecimal(int n) {
        System.out.println("Binary to Decimal ");
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
        System.out.println("Decimal to Binary ");
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
