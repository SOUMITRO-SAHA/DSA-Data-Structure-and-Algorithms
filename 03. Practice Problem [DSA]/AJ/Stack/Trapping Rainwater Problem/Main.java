// Trapping Rainwater Problem
import java.io.*;
import java.util.*;

class Solution {
	// Approach-2:
    // TC: O(N) ; SC(1)
    public void TappingWater(int[] arr, int n) {
        Stack<Integer> st = new Stack<>();
		int total = 0;
		for(int i=0; i<n; i++){
			int ele = arr[i]; // Current Element
			// Only Activate Whenever it found an element which is
			// Greater then the element that are in the peek of the stack
			while(st.size() > 0 && ele >= arr[st.peek()]){
				int rb = ele; // Highest Building in Right.
				int h = arr[st.pop()]; // Height of the Building.
				// Checking is there is any left boundary present or not
				// If is has any element that means the peek element is the 
				// Heighest Building in left of the current element.
				if(st.size() > 0){
					int lb = arr[st.peek()]; // Highest Building in left.
					
					// Width = currIdx - ngelIdx - 1:
					int width = i - st.peek() -1; 
					
					// min[ngel or nger] - building_height = Space where water can fill.
					int waterCanFill = Math.min(rb, lb) - h; 
					
					int actualWaterFilled = waterCanFill * width; // The volume of the Vaccent Space.
					total += actualWaterFilled;
				}
			}

			// Pushing the current index into the Stack:
			st.push(i);
		}
        
       // Printing the result:
		System.out.println(total);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n= sc.nextInt();
        int[] arr= new int[n];

        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
        
    
        Solution Obj = new Solution();
        Obj.TappingWater(arr, n);
            
        
        sc.close();
        
    }
}