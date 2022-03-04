/*
  You are given the sizes of angles of a simple quadrilateral (in degrees) A, B, C and D, in some order along its perimeter. 
  Program to determine whether the quadrilateral is cyclic or not.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,A,B,C,D;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C>>D;
	    if(A+C!=180 || B+D!=180)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
