/*
Extra Brackets
https://course.acciojob.com/idle?question=1375f004-d383-4a7e-9716-e1a5e377a2ec
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

class Solution {
    public boolean ExtraBrackets(String exp) {
        Stack<Character> st = new Stack<>();

		// Traversing Through the String:
		for(int i = 0; i< exp.length(); i++){
			// Conditions:
			char ch = exp.charAt(i);
			if(ch != ')'){
				// Pushing the not ')' char to the Stack
				st.push(ch);
			}
			else{
				if(st.peek() == '('){
					// No exp in between, so extra bracket pair Present
					return true;
				}
				else{
					// exp is present in between, so extra bracket pair is not Present
					while(st.peek() != '('){
						st.pop(); // Removing the other characters form the Stack:
					}

					// stack peek is corresponding opening bracket
					st.pop();
				}
			}
		}
		// If the loop ends that meant on pair is present.
		return false;
    }
}

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String exp = br.readLine();
	    Solution Obj = new Solution();
        if(Obj.ExtraBrackets(exp))
            System.out.println("true");
        else
            System.out.println("false");
    }
}