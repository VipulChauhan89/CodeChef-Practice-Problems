/*
  Tanu observed many people on the railways station, and made a list of gestures that they made. 
  Usual "Yes" gesture is recorded as "Y", no as "N" and Indian "Yes" gesture as "I". 
  (Assume no foreigner uses the Indian "Yes" gesture and vice-versa). 
  Identify which of them were Indians, which were not Indian, and which one you cannot be sure about.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,n,i;
	string s,s1;
	cin>>T;
	while(T--)
	{
	    cin>>n>>s;
	    i=0;
	    s1="NOT SURE";
	    while(i!=n)
	    {
	        if(s[i]=='Y')
	        {
	            s1="NOT INDIAN";
	        }
	        else if(s[i]=='I')
	        {
	            s1="INDIAN";
	        }
	        i++;
	    }
	    cout<<s1<<endl;
	}
	return 0;
}
