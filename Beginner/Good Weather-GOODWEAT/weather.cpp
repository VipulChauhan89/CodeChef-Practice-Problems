/*
  The weather report of Chefland is Good if the number of sunny days in a week is strictly greater than the number of rainy days.
  Given 7 integers A1,A2,A3,A4,A5,A6,A7 where Ai=1 denotes that the ith day of week in Chefland is a sunny day, Ai=0 denotes that the ith day in Chefland is a rainy day. 
  Program to determine if the weather report of Chefland is Good or not.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,sunny,rainy;
	cin>>T;
	int A[7];
	while(T--)
	{
	    sunny=0;
	    rainy=0;
	    for(int i=0;i<7;i++)
	    {
	        cin>>A[i];
	        if(A[i]==1)
	        {
	            sunny++;
	        }
	        else
	        {
	            rainy++;
	        }
	    }
	    if(sunny>rainy)
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
