/*
  Chef considers a string consisting of lowercase English alphabets beautiful if all the characters of the string are vowels.
  Chef has a string S consisting of lowercase English alphabets, of length N. He wants to convert S into a beautiful string T. 
  In order to do so, Chef does the following operation on every character of the string:
          If the character is a consonant, change the character to its closest vowel.
          If the character is a vowel, don't change it.
  Chef realizes that the final string T is not unique. Chef wonders, what is the total number of distinct beautiful strings T that can be obtained by performing the given operations on the string S.

  Since the answer can be huge, print it modulo 10^9+7.
*/
#include <iostream>
#include <set>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    const int C=1e9+7;
	int T,N,ans;
	string S;
	set<char> se;
	se.insert('l');
	se.insert('r');
	se.insert('c');
	se.insert('g');
	cin>>T;
	while(T--)
	{
	    cin>>N>>S;
	    ans=1;
	    for(auto c:S)
	    {
	        if(se.find(c)!=se.end())
	        {
	            ans*=2;
	            ans%=C;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
