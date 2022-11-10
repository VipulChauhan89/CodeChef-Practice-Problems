/*
    Mario was going to gift Princess Peach a string S of even length N. Mario was clumsy and thus, broke the string in the middle. 
    He now has two strings A and B such that A=S[1,N/2] and B=S[N/2+1,N]. Mario is not sure about the order in which he should join the strings A and B to get the string S. 
    Thus, he joins the strings in any random order. Find whether it is guaranteed that Mario will get the same string S if he joins the strings A and B in any order.
    Note that S[L,R] denotes a substring of string S starting at index L and having a length (R−L+1).
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	string s;
	cin>>T;
	while(T--)
	{
	    cin>>N>>s;
	    int i=0,j=N/2,count=0;
	    while(s[i++]==s[j++])
	    {
	        count++;
	    }
	    (count==N/2)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}