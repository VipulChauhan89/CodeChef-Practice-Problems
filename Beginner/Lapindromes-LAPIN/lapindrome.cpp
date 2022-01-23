/*
  program to print "YES" if the string is lapindrome else print "NO".
  
  Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. 
  If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. 
  For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. 
  Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. 
  The two halves contain the same characters but their frequencies do not match. 
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,n;
	string s;
	cin>>T;
	while(T--)
	{
	    string l,r;
	    cin>>s;
	    n=s.length();
	    for(int i=0;i<n/2;i++)
	    {
	        l+=s[i];
	        r+=s[n-1-i];
	    }
	    sort(l.begin(),l.end());
	    sort(r.begin(),r.end());
	    if(l==r)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
