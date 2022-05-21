/*
  Chef has a string S with length N. 
  He needs to find the number of indices i (1≤i≤N−1) such that the i-th character of this string is a consonant and the i+1-th character is a vowel. 
  However, he is busy, so he asks for your help.
*/
#include <iostream>
#include <set>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,i;
	string S;
	cin>>T;
	set<char> a={'a','e','i','o','u'};
	while(T--)
	{
	    int count=0;
	    cin>>N>>S;
	    for(i=0;i<N-1;i++)
	    {
	        if(a.find(S[i])==a.end() && a.find(S[i+1])!=a.end()) 
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
