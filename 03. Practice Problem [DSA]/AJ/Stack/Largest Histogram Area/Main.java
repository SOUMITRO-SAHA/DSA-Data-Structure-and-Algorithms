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
        System.out.println(new Solution().maximumArea(arr, n));
	}
}

class Solution{
    public static long maximumArea(long hist[], long n){
		int len = (int) n; 
		int []nseli = nseliArr(hist,len);
		int []nseri = nseriArr(hist,len);
		long maxArea = 0;
		for(int i = 0; i<len; i++){
			long h = hist[i];
			long w = nseri[i] - nseli[i] -1;
			long a = h * w;
			maxArea = Math.max(maxArea, a);
		}
		return maxArea;
    }
	public static int[] nseliArr(long []arr, int n){
		Stack<Integer> st = new Stack<>();
		int []nseli = new int[n];
		for(int i=n-1; i>=0; i--){
			long el = arr[i];
			while(st.size() > 0 && el < arr[st.peek()]){
				int idx = st.pop();
				nseli[idx] = i;
			}
			st.push(i);
		}
		while(st.size() > 0){
			int idx = st.pop();
			nseli[idx] = -1;
		}

		return nseli;
	}
	public static int[] nseriArr(long []arr, int n){
		Stack<Integer> st = new Stack<>();
		int []nseri = new int[n];
		for(int i= 0; i<n; i++){
			long el = arr[i];
			while(st.size() > 0 && el < arr[st.peek()]){
				int idx = st.pop();
				nseri[idx] = i;
			}
			st.push(i);
		}
		while(st.size() > 0){
			int idx = st.pop();
			nseri[idx] = n;
		}
		return nseri;
	}
}



