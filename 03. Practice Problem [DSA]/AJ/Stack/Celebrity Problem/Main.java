import java.io.*;
import java.util.*; 

class Main{
    public static void main(String args[]) throws IOException { 
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M[][] = new int[N][N];
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                M[i][j] = sc.nextInt();
        System.out.println(new Solution().findCelebrity(M,N));
    } 
} 
class Solution{ 
    int findCelebrity(int M[][], int n){
		// Traversing Row Wise means, Whom I know.
		// Traversing Colum Wise means, Who Knows me.
	    Stack<Integer> st = new Stack<>();
		for(int i = 0; i < n; i++){
			st.push(i);
		}
		
		while(st.size() > 1){
			int p1 = st.pop();
			int p2 = st.pop();
			if(M[p1][p2] == 1){
				// That, means p1 knows p2
				// Therefore, Eliminate p1
				st.push(p2);
			}
			else{
				st.push(p1);
			}
		}

		int pCeleb = st.pop();
		
		// Checking Whether pCeleb is actually a Celeb or not
		// I don't know anyone
		// First, Traversing through Column Wise:
        for (int c = 0; c < n; c++) {
            if (M[pCeleb][c] == 1) {
                return -1;
            }
        }

        // I should be known by everyone
		// Second, Traversing through row wise:
        for (int r = 0; r < n; r++) {
            if (pCeleb != r) {
                if (M[r][pCeleb] == 0) {
                    return -1;
                }
            }
        }
		
		return pCeleb;
    }
}