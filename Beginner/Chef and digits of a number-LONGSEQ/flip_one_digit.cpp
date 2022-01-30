/*
  Program to print if it is possible to make all digits equal (either all 0's or all 1's) by flipping exactly 1 digit then output "Yes", else print "No"
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,o,z,i;
	string s;
	cin>>T;
	while(T--)
	{
	    cin>>s;
	    o=0; 
	    z=0;
	    for(i=0;i<s.length();i++)
	    {
	        if(s[i]=='0')
	        {
	            z++;
	        }
	        else
	        {
	            o++;
	        }
	    }
	    if(s.length()==1||min(o,z)==1)
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
