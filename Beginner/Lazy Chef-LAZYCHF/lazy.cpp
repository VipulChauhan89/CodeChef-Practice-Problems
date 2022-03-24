/*
  Chef is a very lazy person. Whatever work is supposed to be finished in x units of time, he finishes it in m*x units of time. 
  But there is always a limit to laziness, so he delays the work by at max d units of time. Given x,m,d, 
  
  Program to find the maximum time taken by Chef to complete the work.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,x,m,d,min,max;
	cin>>T;
	while(T--)
	{
	    cin>>x>>m>>d;
	    min=x*m;
	    max=x+d;
	    if(min>max)
	    {
	        cout<<max<<endl;
	    }
	    else if(max>min)
	    {
	        cout<<min<<endl;
	    }
	    else
	    {
	        cout<<min<<endl;
	    }
	}
	return 0;
}
