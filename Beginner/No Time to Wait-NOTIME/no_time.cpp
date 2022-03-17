/*
  Only x hours are left for the March Long Challenge and Chef is only left with the last problem unsolved. 
  However, he is sure that he cannot solve the problem in the remaining time. From experience, he figures out that he needs exactly H hours to solve the problem.
  Now Chef finally decides to use his special power which he has gained through years of intense yoga. 
  He can travel back in time when he concentrates. Specifically, his power allows him to travel to N different time zones, which are T1,T2,…,TN hours respectively behind his current time.

  Program to find out whether Chef can use one of the available time zones to solve the problem and submit it before the contest ends.
*/
#include <iostream>
using namespace std;

int main() 
{
	int N,H,x,count=0;
	cin>>N>>H>>x;
	int T[N];
	for(int i=0;i<N;i++)
	{
	    cin>>T[i];
	    if(T[i]+x>=H)
	    {
	        count=1;
	    }
	}
	if(count!=1)
	{
	    cout<<"NO"<<endl;
	}
	else 
	{
	    cout<<"YES"<<endl;
	}
	return 0;
}
