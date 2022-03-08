/*
  Chef prepared a problem. The admin has rated this problem for x points.

  A problem is called :
  1) Easy if 1≤x<100
  2) Medium if 100≤x<200
  3) Hard if 200≤x≤300

  Program to find the category to which Chef’s problem belongs.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,x;
	cin>>T;
	while(T--)
	{
	    cin>>x;
	    if(x>=1 && x<100)
	    {
	        cout<<"Easy"<<endl;
	    }
	    else if(x>=100 && x<200)
	    {
	        cout<<"Medium"<<endl;
	    }
	    else 
	    {
	        cout<<"Hard"<<endl;
	    }
	}
	return 0;
}
