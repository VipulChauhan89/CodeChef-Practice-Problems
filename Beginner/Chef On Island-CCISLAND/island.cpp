/*
  Suppose Chef is stuck on an island and currently he has x units of food supply and y units of water supply in total that he could collect from the island. 
  He needs xr units of food supply and yr units of water supply per day at the minimal to have sufficient energy to build a boat from the woods and also to live for another day. 
  Assuming it takes exactly D days to build the boat and reach the shore.
  Program to tell whether Chef has the sufficient amount of supplies to be able to reach the shore by building the boat?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,x,y,xr,yr,D;
	cin>>T;
	while(T--)
	{
	    cin>>x>>y>>xr>>yr>>D;
	    if(x>=D*xr && y>=D*yr)
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
