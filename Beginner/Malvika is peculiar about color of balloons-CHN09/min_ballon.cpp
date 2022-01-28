//Program for each test case, output a single line containing an integer — the minimum number of flips required.
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,a,b,i;
	string s;
	cin>>T;
	while(T--)
	{
	    a=0;
	    b=0;
	    cin>>s;
	    for(i=0;i<s.length();i++)
	    {
	        if(s[i]=='a')
	        {
	            a++;
	        }
	        else
	        {
	            b++;
	        }
	    }
	    cout<<min(a,b)<<endl;
	}
	return 0;
}
