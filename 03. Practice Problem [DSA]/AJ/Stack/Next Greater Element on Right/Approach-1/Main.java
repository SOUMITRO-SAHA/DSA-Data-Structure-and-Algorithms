
/* 
 * Approach-1: try to process next greater element of each position.
 * Right to Left [Traversal]
 */
import java.util.*;
import java.io.*;

class Solution{
	// TC: O(N); SC: O(N)
    public long[] nextLargerElement(long[] arr, int n){ 
        // We will start traversing from the right
        Stack<Long> stack = new Stack<Long>();

        long []nger = new long[n];
        // Potential nge lies on the right
        for (int i = arr.length - 1; i >= 0; i--) {
            long ele = arr[i];
            // check peek element of stack, if they are smaller than me then they can by my nger,
            while (stack.size() > 0 && stack.peek() <= ele){
                stack.pop();
			}
			// Peek element is the nger:
            if (stack.size() > 0) {
                nger[i] = stack.peek();
            } else {
                nger[i] = -1;
            }

            // Add current element for potential nger:
            stack.push(ele);
        }
        
        return nger;
    } 
}
class Main {
    public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine().trim());
        String inputLine[] = br.readLine().trim().split(" ");
        long[] arr = new long[n];
        for(int i=0; i<n; i++)arr[i]=Long.parseLong(inputLine[i]);
        long[] res = new Solution().nextLargerElement(arr, n);
        for (int i = 0; i < n; i++) 
            System.out.print(res[i] + " ");
        System.out.println();
	}
}