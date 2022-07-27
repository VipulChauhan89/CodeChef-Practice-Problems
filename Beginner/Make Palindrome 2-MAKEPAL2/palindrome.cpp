/*
  You are given a binary string S of length N. You want to obtain a palindrome from S by applying the following operation at most ⌊N2⌋ times:
  Choose an index i(1≤i≤|S|), delete the character Si from S and concatenate the remaining parts of the string. Here |S| denotes the current length of string S.
  For example, if S= 11010, then applying the operation on index i=2 makes S= 1010.
  Note that after each operation, the length of the string S decreases by one.
  Find any palindrome you can obtain after the operations. It can be proved that it is always possible to obtain a palindrome from S under the given constraints.
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	char c;
	cin>>T;
	while(T--)
	{
	    unordered_map<char,int> m;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>c;
	        m[c]++;
	    }
	    if(m['0']>m['1'])
	    {
	        for(int i=0;i<m['0'];i++)
	        {
	            cout<<0;
	        }
	        cout<<endl;
	    }
	    else
	    {
	        for(int i=0;i<m['1'];i++)
	        {
	            cout<<1;
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
