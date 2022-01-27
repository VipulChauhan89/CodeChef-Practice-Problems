//program for each test case, print the minimal and the maximal difference between two given strings separated with a single space.
#include <iostream>
using namespace std;

int main() 
{
	int T,min,max;
	string s1,s2;
	cin>>T;
	while(T--)
	{
	    min=0;
	    max=0;
	    cin>>s1>>s2;
	    for(int i=0;i<s1.length();i++)
	    {
	        if(s1[i]=='?' || s2[i]=='?')
	        {
	            max++;
	        }
	        else if(s1[i]!=s2[i])
	        {
	            min++;
	            max++;
	        }
	    }
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}
