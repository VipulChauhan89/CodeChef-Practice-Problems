/*
  Chef wants to implement wildcard pattern matching supporting only the wildcard '?'. 
  The wildcard character '?' can be substituted by any single lower case English letter for matching. 
  He has two strings X and Y of equal length, made up of lower case letters and the character '?'. 
  He wants to know whether the strings X and Y can be matched or not.
  
  For each test case, output a single line with the word Yes if the strings can be matched, otherwise output No
*/
#include <iostream>
using namespace std;

int main() 
{
    int T,i,c;
    string s1,s2;
    cin>>T;
    while(T--)
    {
        c=0;
        cin>>s1>>s2;
        for(i=0;i<s1.length();i++)
        {
            if(s1[i]=='?'||s2[i]=='?')
            {
                continue;
            }
            else if(s1[i]!=s2[i])
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
	return 0;
}
