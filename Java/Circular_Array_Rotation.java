package Java;

import java.util.*;

public class Circular_Array_Rotation {
    static void RightShift(int[] a, int k) {
        int n = a.length - 1;
        // looping through the array k times :
        for (int i = 0; i < k; i++) {
            // Right Shifting :
            int lastEl = a[n];
            for (int j = n; j > 0; j--) {
                a[j] = a[j - 1];
            }
            a[0] = lastEl;
        }
    }

    static void Display(int[] a) {
        for (int i : a) {
            System.out.print(i + " ");
        }
        System.out.println(" ");
    }

    public static void main(String[] args) {
        // your code here
        Scanner sc = new Scanner(System.in);
        // Variables
        int n = sc.nextInt();
        int k = sc.nextInt();
        int q = sc.nextInt();

        // Array
        int[] arr = new int[n];
        // Taking Input
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        // Query Array;
        int[] queries = new int[q];
        // Taking Input
        for (int i = 0; i < q; i++) {
            queries[i] = sc.nextInt();
        }

        // ############ Calculation ############### //
        // Right Shift
        RightShift(arr, k);

        Display(arr);

        // Displaying the Queries :
        for (int i = 0; i < q; i++) {
            System.out.println(arr[queries[i]]);
        }

    }
}