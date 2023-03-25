import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));	
		long n = Long.parseLong(br.readLine().trim());
		String inputLine[] = br.readLine().trim().split(" ");
		long[] arr = new long[(int)n];
		for(int i=0; i<n; i++)arr[i]=Long.parseLong(inputLine[i]);
		System.out.println(new Solution().maximumArea(arr, (int)n));
	}
}

class Solution{
    public static long maximumArea(long arr[], int n){
		long mA = 0;
		Stack<Integer> st = new Stack<>();
		for(int i = 0; i<n; i++){
			long el = arr[i];
			while(st.size() > 0 && el < arr[st.peek()]){
				int idx = st.pop();
				int rb = i;
				int lb = (st.size() > 0)?st.peek():-1;

				long w = rb - lb -1;
				long h = arr[idx];
				long a = w * h;
				mA = Math.max(mA, a);
			}
			st.push(i);
		}
		while(st.size() > 0){
			int idx = st.pop();
			int rb = n;
			int lb = (st.size() > 0)?st.peek():-1;

			long w = rb - lb -1;
			long h = arr[idx];
			long a = w * h;
			mA = Math.max(mA, a);
		}
		return mA;
    }
}



