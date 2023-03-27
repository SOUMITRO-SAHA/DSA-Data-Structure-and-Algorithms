// Minimum Stack
import java.util.*;

class Main
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		while(T>0){
			int q = sc.nextInt();
			Solution g = new Solution();
			while(q>0){
				int qt = sc.nextInt();
				
				if(qt == 1){
					int att = sc.nextInt();
					g.push(att);
				}
				else if(qt == 2){
					System.out.print(g.pop()+" ");
				}
				else if(qt == 3){
					System.out.print(g.getMin()+" ");
				}
			
				q--;
			}
			System.out.println();
			T--;
		}
        sc.close();
	}
}

/*
Approach-2:
class Solution{
	private class Pair{
		int val;
		int minEle;
		Pair(int val, int minEle){
			this.val = val;
			this.minEle = minEle;
		}
	}
	Stack<Pair> s;
    
	Solution(){
		s = new Stack<Pair>();
	}

	void push(int x){
        //Write Code here	
		if(s.isEmpty()){
			s.push(new Pair(x,x));
		}
		else{
			s.push(new Pair(x,Math.min(s.peek().val,x)));
		}
    }
	
	int pop(){
        //Write Code here
		return s.pop().val;
	}

    int getMin(){
        //Write Code here
		return s.peek().minEle;
	}	
}
*/
class Solution{
	int minEle;
	Stack<Integer> s;
    
	Solution(){
		s = new Stack<>();
	}

	// TC: O(1); SC: O(1)
	void push(int x){
        //Write Code here
		if(s.isEmpty()){
			minEle = x;
			s.push(x);
		}
		else{
			if(x < minEle){
				int val = x - minEle;
				s.push(val);
				minEle = x;
			}
			else{
				s.push(x);
			}
		}
    }
	
	int pop(){
        //Write Code here
		if(s.isEmpty())
			return -1;
		else if(s.peek() < minEle){
			int previousMin = minEle - s.pop();
			int val = minEle;
			minEle = previousMin;
			return val;
		}
		return s.pop();
	}

    int getMin(){
        //Write Code here
		if(s.isEmpty()) return -1;
		return minEle;
	}	
}
