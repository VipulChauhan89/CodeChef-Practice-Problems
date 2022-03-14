/*
  To address the situation of Water Scarcity in Chefland, Chef has started an awareness campaign to motivate people to use greywater for toilets, washing cars, gardening, and many other chores which don't require the use of freshwater. 
  These activities presently consume y liters of water every week per household and Chef thinks through this campaign he can help cut down the total usage to ⌊y2⌋.

  Assuming x liters of water every week per household is consumed at chores where using freshwater is mandatory and a total of C liters of water is available for the entire Chefland having H households for a week.
  Program to find whether all the households can now have sufficient water to meet their requirements.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,H,x,y,C;
	cin>>T;
	while(T--)
	{
	    cin>>H>>x>>y>>C;
	    if(H*(x+y/2)<=C)
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
