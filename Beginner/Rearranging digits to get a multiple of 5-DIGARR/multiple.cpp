//Given a positive integer N, MoEngage wants you to determine if it is possible to rearrange the digits of N (in decimal representation) and obtain a multiple of 5.
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,D;
	cin>>T;
	string s;
	while(T--)
	{
	    cin>>D>>s;
	    if(find(s.begin(),s.end(),'0')!=s.end() || find(s.begin(),s.end(),'5')!=s.end())
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
