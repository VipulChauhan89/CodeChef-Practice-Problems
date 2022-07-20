/*
  We say that a word is hard to pronounce if it contains 4 or more consonants in a row; otherwise it is easy to pronounce. 
  For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.
  You are given a string S consisting of N lowercase Latin characters. 
  Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.
*/
#include <iostream>
using namespace std;

bool vowel(char s)
{
    if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
    {
        return true;
    }
    return false;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,count;
	string S,ans;
	cin>>T;
	while(T--)
	{
	    count=0;
	    ans="YES";
	    cin>>N>>S;
	    for(int i=0;i<N;i++)
	    {
	        if(vowel(S[i]))
	        {
	            count=0;
	            continue;
	        }
	        else
	        {
	            count++;
	            if(count==4)
	            {
	                ans="NO";
	                break;
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
