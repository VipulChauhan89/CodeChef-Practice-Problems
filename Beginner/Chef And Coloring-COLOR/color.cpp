/*
  Program to print the minimum number of rooms need to be painted in order to have all the rooms painted with same color i.e either red, blue or green.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,N,r,g,b;
	string s;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    cin>>s;
	    r=count(s.begin(),s.end(),'R');
	    g=count(s.begin(),s.end(),'G');
	    b=count(s.begin(),s.end(),'B');
	    cout<<N-max(r,max(g,b))<<endl;
	}
	return 0;
}
