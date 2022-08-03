//{ Driver Code Starts
//Initial Template for Java


/*package whatever //do not write package name here */


import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
	    
	    //taking input using Scanner class
		Scanner sc=new Scanner(System.in);
		
		//taking total count of testcases
		int t=sc.nextInt();
		
		while(t-->0)
		{
		    //taking total number of elements
		    int n=sc.nextInt();
		    
		    //calling printFibb() method
		    long[] res = new Solution().printFibb(n);
		    
		    //printing the elements of the array
		    for (int i = 0; i < res.length; i++)
		        System.out.print (res[i]+" ");
		    System.out.println();
		}
	}
}
// } Driver Code Ends


//User function Template for Java


class Solution
{
    //Function to return list containing first n fibonacci numbers.
    public static long[] printFibb(int n) 
    {
        //Your code here
        if(n == 1)
        {
            long[] res = new long[1];
            res[0] = 1;
            return res;
        }
        else if(n ==2)
        {
            long[] res = new long[2];
            res[0] = res[1] =1;
            return res;
        }
        else
        {
            long[] res = new long[n];
            res[0] = res[1] = 1;
            for(int i = 2; i< n; i++)
            {
                res[i] = res[i-1] + res[i-2];
            }
            return res;
        }
    }
}