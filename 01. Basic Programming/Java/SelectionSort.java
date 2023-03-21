package Java;

import java.util.Arrays;

public class SelectionSort {
    static void Selection_Sort(int[] a) {
        for (int i = 0; i < a.length; i++) {
            int last = a.length - i - 1;
            // Finding the Last Index:
            int maxIndex = getMaxIndex(a, 0, last);
            // Swapping the Elements
            swap(a, maxIndex, last);
        }
    }

    // Max index
    static int getMaxIndex(int[] arr, int start, int end) {
        int minIndex = 0;
        for (int i = start; i <= end; i++) {
            if (arr[minIndex] > arr[i]) {
                minIndex = i;
            }
        }
        return minIndex;
    }

    // Swap Function
    static void swap(int[] a, int first, int second) {
        int temp = a[first];
        a[first] = a[second];
        a[second] = temp;
    }

    public static void main(String[] args) {
        int[] arr = { 2, 3, 1, 5, 4 };

        Selection_Sort(arr);
        // Print
        System.out.println(Arrays.toString(arr));
    }
}
