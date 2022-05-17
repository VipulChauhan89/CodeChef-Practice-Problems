/*
  Alice has a bucket of water initially having W litres of water in it. The maximum capacity of the bucket is X liters.
  Alice turned on the tap and the water starts flowing into the bucket at a rate of Y litres/hour. She left the tap running for exactly Z hours. 
  Determine whether the bucket has been overflown, filled exactly, or is still left unfilled.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,W,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>W>>X>>Y>>Z;
	    int ans=W+Z*Y;
	    if(ans<X)
	    {
	        cout<<"UNFILLED"<<endl;
	    }
	    else if(ans==X)
	    {
	        cout<<"FILLED"<<endl;
	    }
	    else
	    {
	        cout<<"OVERFLOW"<<endl;
	    }
	}
	return 0;
}
