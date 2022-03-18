/*
  In Uttu's college, a semester is said to be a:
        Overload semester if the number of credits taken >65.
        Underload semester if the number of credits taken <35.
        Normal semester otherwise
  Given the number of credits X taken by Uttu, 
  Program to determine whether the semester is Overload, Underload or Normal.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    if(X>65)
	    {
	        cout<<"Overload"<<endl;
	    }
	    else if(X<35)
	    {
	        cout<<"Underload"<<endl;
	    }
	    else
	    {
	        cout<<"Normal"<<endl;
	    }
	}
	return 0;
}
