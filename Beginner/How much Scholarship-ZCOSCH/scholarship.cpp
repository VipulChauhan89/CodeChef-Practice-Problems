/*
  Rank 1 to Rank 50 will get 100% scholarship on the ZCO exam fee and Rank 51 to Rank 100 will get 50% percentage scholarship on the ZCO exam fee. 
  The rest do not get any scholarship.
*/
#include <iostream>
using namespace std;

int main() 
{
	int R;
	cin>>R;
	if(R>=1 && R<=50)
	{
	    cout<<100<<endl;
	}
	else if(R>50 && R<=100)
	{
	    cout<<50<<endl;
	}
	else
	{
	    cout<<0<<endl;
	}
	return 0;
}
