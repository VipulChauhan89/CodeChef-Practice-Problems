/*
  Chefland is holding a virtual marathon for the categories 10 km, 21 km and 42 km having prizes A,B,C (A<B<C) respectively to promote physical fitness. 
  In order to claim the prize in a particular category the person must cover the total distance for that category within D days. 
  Also a single person cannot apply in multiple categories.
  Given the maximum distance d km that Chef can cover in a single day, 
  
  Program to find the maximum prize that Chef can win at the end of D days. If Chef can't win any prize, print 0.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,D,d,A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>D>>d>>A>>B>>C;
	    D=D*d;
	    if(D>=42)
	    {
	        cout<<C<<endl;
	    }
	    else if(D<42 && D>=21)
	    {
	        cout<<B<<endl;
	    }
	    else if(D<21 && D>=10)
	    {
	        cout<<A<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	}
	return 0;
}
