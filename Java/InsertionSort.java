package Java;

import java.util.Arrays;

public class InsertionSort {
    static void Insertion_Sort(int[] a) {
        for (int i = 0; i <= a.length - 2; i++) {
            for (int j = i + 1; j > 0; j--) {
                if (a[j] < a[j - 1]) {
                    int temp = a[j];
                    a[j] = a[j - 1];
                    a[j - 1] = temp;
                } else
                    break;
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = { 2, 3, 1, 5, 4 };

        Insertion_Sort(arr);

        // Print
        System.out.println(Arrays.toString(arr));
    }
}
