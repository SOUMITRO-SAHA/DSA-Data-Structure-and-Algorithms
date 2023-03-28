import java.io.*;
import java.util.*;

class Solution{
	public long minSubarraySum(int n, int arr[]){
		// Code Here
		Stack<Integer> st = new Stack<>();
		long mod = 1000000007;
		long sum = 0;
		for(int i = 0; i<n; i++){
			int ele = arr[i];
			while(st.size() > 0 && ele < arr[st.peek()]){
				int rb = i;
				int lb = -1;
				int index = st.pop();
				if(st.size() > 0){
					lb = st.peek();
				}
				long totalSubArray = ((index - lb) * (rb - index)) % mod;
				long sumOfMinimum = (totalSubArray * arr[index]) % mod;
				sum = (sum + sumOfMinimum) % mod;
			}
			st.push(i);
		}
		while(st.size() > 0){
			int rb = n;
			int lb = -1;
			int index = st.pop();
			if(st.size() > 0){
				lb = st.peek();
			}
			long totalSubArray = ((index - lb) * (rb - index)) % mod;
			long sumOfMinimum = (totalSubArray * arr[index]) % mod;
			sum = (sum + sumOfMinimum) % mod;
		}

		return sum;
	}
}

public class Main {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int a[] = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = input.nextInt();
        }
		Solution Obj = new Solution();
        System.out.println(Obj.minSubarraySum(n,a));
    }
}