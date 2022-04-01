/*
  Two sisters, A and B, play the piano every day. During the day, they can play in any order. 
  That is, A might play first and then B, or it could be B first and then A. But each one of them plays the piano exactly once per day. 
  They maintain a common log, in which they write their name whenever they play.
  You are given the entries of the log, but you're not sure if it has been tampered with or not. 
  Your task is to figure out whether these entries could be valid or not.
  
  Program to do so.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,c1,c2,n;
	string s,ans;
	cin>>T;
	while(T--)
	{
	    c1=0;
	    c2=0;
	    ans="yes";
	    cin>>s;
	    n=s.length();
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='A')
	        {
	            c1++;
	        }
	        else if(s[i]=='B')
	        {
	            c2++;
	        }
	        if(abs(c1-c2)>1)
	        {
	            ans="no";
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
