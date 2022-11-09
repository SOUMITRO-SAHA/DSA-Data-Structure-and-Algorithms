import java.util.*;
import java.lang.*;
import java.io.*;

public class New {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Variable
        int n = sc.nextInt();
        int m = sc.nextInt();

        int left = 0;
        int top = 0;
        int right = m - 1;
        int bottom = n - 1;

        // Matrix:
        int[][] arr = new int[n][m];

        // Taking Input:
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        // Traversing the Matrix
        while (left <= right && top <= bottom) {
            // Top Line
            for (int i = top; i < n; i++)
                System.out.print(arr[top][i]);
            top++;

            // Right Line
            for (int i = right; i < n; i++)
                System.out.print(arr[right][n - i]);
            right--;

            // Bottom Line
            for (int i = bottom; i < n; i++)
                System.out.print(arr[bottom][n - i]);
            bottom--;

            // left Line
            for (int i = left; i < n; i++)
                System.out.print(arr[left][n - i]);
            left++;

        }
    }
}
