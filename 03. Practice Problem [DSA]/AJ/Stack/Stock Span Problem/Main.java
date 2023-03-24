/*
* Stock Span Problem
* https://course.acciojob.com/idle?question=dee87292-2cca-4f9c-9501-973000b81a15
* */
import java.util.Scanner;
import java.util.Stack;

class Pair{
    int val;
    int idx;
    Pair(int val, int idx){
        this.val = val;
        this.idx = idx;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = input.nextInt();
        }
        int[] ans = Solution.stockSpan(a);
        for(int i = 0; i < n; i++){
            System.out.print(ans[i] + " ");
        }
    }
}

class Solution {
    static int[] nextGreaterElementOnLeftIndex(int[] arr) {
        Stack<Integer> st = new Stack<>();
        int[] ngel = new int[arr.length];

        for (int i = arr.length -1; i >= 0; i--) {
            int el = arr[i];
            // Iterating
            while (st.size() > 0 && el > arr[st.peek()]) {
                int idx = st.pop();
                ngel[idx] = i;
            }

            // Pushing the current element onto the stack
            st.push(i);
        }
        
        while (st.size() > 0) {
            int idx = st.pop();
            ngel[idx] = -1;
        }

        return ngel;
    }
    
    static int[] stockSpan(int[] arr) {
        int[] ans = new int[arr.length];
        int[] ngeli = nextGreaterElementOnLeftIndex(arr);

        for (int i = 0; i < arr.length; i++) {
            ans[i] = (i - ngeli[i]);
        }

        return ans;
    }
}