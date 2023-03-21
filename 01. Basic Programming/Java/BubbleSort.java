package Java;

import java.util.*;

public class BubbleSort {
    public static void Bubble_Sort(int[] a) {
        boolean swapped;
        for (int i = 0; i < a.length; i++) {
            swapped = false;
            for (int j = 1; j <= a.length - i - 1; j++) {
                if (a[j] > a[j - 1]) {
                    int temp = a[j];
                    a[j] = a[j - 1];
                    a[j - 1] = temp;
                    swapped = true;
                }
            }
            if (!swapped) {
                break;
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = { -55, 100, 0, -22, 44 };

        // Sorting
        Bubble_Sort(arr);

        // Printing
        System.out.println(Arrays.toString(arr));
    }
}
