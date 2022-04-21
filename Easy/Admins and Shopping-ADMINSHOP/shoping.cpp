/*
  CodeChef admins went on shopping at a shopping mall. There are N shops in the mall where the ith shop has a capacity of Ai people. 
  In other words, at any point in time, there can be at most Ai number of people in the ith shop.
  There are X admins. Each admin wants to visit each of the N shops exactly once. 
  It is known that an admin takes exactly one hour for shopping at any particular shop. 
  Find the minimum time (in hours) in which all the admins can complete their shopping.
*/
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() 
{
	int T,N,X,count;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X;
	    int A[N];
	    count=INT_MAX;
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        count=min(count,A[i]);
	    }
	    cout<<max(N,X/count+(X%count!=0))<<endl;
	}
	return 0;
}
