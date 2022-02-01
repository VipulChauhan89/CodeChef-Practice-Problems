/*
  Program to help chef identify which words his brother can read in order to help Jeff to study, Chef gave him a book with the text consisting of N words. 
  Jeff can read a word iff it consists only of the letters he knows.

  Now Chef is curious about which words his brother will be able to read, and which are not.
*/
#include <iostream>
using namespace std;

int main() 
{
	string s1,s2;
	int N,i,j,count;
	cin>>s1>>N;
	while(N--)
	{
	    count=0;
	    cin>>s2;
	    for(i=0;i<s1.length();i++)
	    {
	        for(j=0;j<s2.length();j++)
	        {
	            if(s1[i]==s2[j])
	            {
	                count++;
	            }
	        }
	    }
	    if(count==s2.length())
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
