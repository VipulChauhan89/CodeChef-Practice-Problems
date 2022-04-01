/*
  Chef decided to find the connections with all of his friends in an unnamed social network. 
  He calls a user of the social network his friend if there is a common substring of the string "chef" and the nickname of that user with length ≥ 2.
  Given a list of users of the social network, 
  
  Program to compute the number of Chef's friends.
*/
#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int N,n,count=0;
	string u,s;
	cin>>N;
	while(N--)
	{
	    cin>>u;
	    n=u.length();
	    for(int i=0;i<n-1;i++)
	    {
	        s=u.substr(i,2);
	        if(s=="ch" || s=="he" || s=="ef")
	        {
	            count++;
	            break;
	        }
	    }
	}
	cout<<count<<endl;
	return 0;
}
