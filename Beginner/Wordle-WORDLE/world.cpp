/*
  Chef invented a modified wordle. There is a hidden word S and a guess word T, both of length 5.

  Chef defines a string M to determine the correctness of the guess word. For the ith index:
      If the guess at the ith index is correct, the ith character of M is 𝙶.
      If the guess at the ith index is wrong, the ith character of M is 𝙱.
  Given the hidden word S and guess T.
  
  Program to determine string M.
*/
#include <iostream>
using namespace std;

int main() 
{
	int t;
	string S,T;
	cin>>t;
	while(t--)
	{
	    cin>>S>>T;
	    for(int i=0;i<5;i++)
	    {
	        if(S[i]==T[i])
	        {
	            cout<<'G';
	        }
	        else
	        {
	            cout<<'B';
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
