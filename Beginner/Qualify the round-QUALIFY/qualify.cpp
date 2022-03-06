/*
  In a coding contest, there are two types of problems:
  Easy problems, which are worth 1 point each
  Hard problems, which are worth 2 points each
  
  To qualify for the next round, a contestant must score at least X points. Chef solved A Easy problems and B Hard problems.
  Program to find out will Chef qualify or not?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X,A,B;
	cin>>T;
	while(T--)
	{
	    cin>>X>>A>>B;
	    if(A+B*2>=X)
	    {
	        cout<<"Qualify"<<endl;
	    }
	    else
	    {
	        cout<<"NotQualify"<<endl;
	    }
	}
	return 0;
}
