/*
  Chef is always trying to find patterns within integers. 
  Today Chef has 3 positive integers and he wonders if any one of them can be written as the sum of the other two integers.
  Program to help chef by printing "YES" if it is possible else "NO".
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,x,y,z;
	cin>>T;
	while(T--)
	{
	    cin>>x>>y>>z;
	    if((x+y==z)||(y+z==x)||(x+z==y))
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
