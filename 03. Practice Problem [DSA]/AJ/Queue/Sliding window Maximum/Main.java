import java.util.*;
class Solution{
    static int[] SlidingWindowMaximum(int n, int k, int[] arr){
        // Code Starts
		int []ans = new int[n-k+1];
		int win = 0;

		// Creating a Stack Using Deque:
		// Stack: LIFO. So, addLast()+removeLast():
		Deque<Integer> dq = new ArrayDeque<>();

		// Iterating the Array:
		for(int i=0; i<n; i++){
			// If the Bottom Most element is out of the range of the Current Window then, remove it.
			while(dq.size()>0 && dq.peek() <= i -k){
				dq.removeFirst();
			}
			
			int ele = arr[i];
			// Checking the ngeri:
			while (dq.size() > 0 && ele > arr[dq.getLast()]) {
                dq.removeLast();
            }
			// Adding the Element into the Stack:
			dq.addLast(i);

			// If the Current Index if out of the range of the Window, Then add the maximum value to the resultent array:
			if(i >= k -1){
				ans[win++] = arr[dq.peek()];
			}
		}

		return ans;
		// Code Ends
    }
}

public class Main {
    public static void main(String[] args) throws Throwable {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int nums[]=new int[n];
        for(int i = 0; i < n; i++)
        {
            nums[i] = sc.nextInt();
        }
        Solution obj = new Solution();
        int[] ans=obj.SlidingWindowMaximum(n,k,nums);
        for(int i=0;i<ans.length;++i){
            System.out.print(ans[i] + " ");
        }
    }
}
