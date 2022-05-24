/*
  You are given a binary string A of length N.
  You can perform the following type of operation on the string A:
        Choose two different indices i and j (1≤i,j≤N);
        Change Ai and Aj to Ai⊕Aj.
  Here ⊕ represents the bitwise XOR operation. Find the minimum number of operations required to convert the given string into a palindrome.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,count;
	string S;
	cin>>T;
	while(T--)
	{
	    count=0;
	    cin>>N>>S;
	    int i=0,j=N-1;
	    while(i<j)
	    {
	        if(S[i]!=S[j])
	        {
	            count++;
	        }
	        i++;
	        j--;
	    }
	    cout<<(count+1)/2<<endl;
	}
	return 0;
}
