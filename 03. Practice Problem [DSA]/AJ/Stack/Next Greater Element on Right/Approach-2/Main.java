/*
 * Approach-2:
 * Left -> Right:
 */
import java.util.*;
import java.lang.*;
import java.io.*;

class Solution {
	// TC: O(N); SC: O(N)
	public static long[] nextLargerElement(long[] arr, int n) {
		// Here, the stack will store the index of the elements:
		Stack<Integer> st = new Stack<Integer>();
		long[] nger = new long[arr.length];

		// The loop will iterate from left to right:
		for (int i = 0; i < arr.length; i++) {
			long ele = arr[i];

			// can the current element be anyone's nge:
			while (st.size() > 0 && ele > arr[st.peek()]) {
				int index = st.peek();
				st.pop(); // Remove from stack
				nger[index] = ele;
			}

			// now I will also looking for my nger:
			st.push(i);
		}

		// Now the left over index still have no nger:
		while (st.size() > 0) {
			int index = st.pop();
			nger[index] = -1;
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