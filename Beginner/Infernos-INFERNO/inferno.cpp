/*
  Ved started playing a new mobile game called Fighting Clans. An army of N enemies is approaching his base. The ith enemy has Hi health points. 
  An enemy gets killed if his health points become 0.Ved defends his base using a weapon named Inferno. 
  He can set the Inferno to one of the following two modes:
          Single-Target Mode: In one second, the Inferno can target exactly one living enemy and cause damage of at most X health points.
          Multi-Target Mode: In one second, the Inferno can target all living enemies and cause damage of 1 health point to each of them.
  Find the minimum time required to kill all the enemies.
*/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int divide(double A,double B)
{
    return ceil(A/B);
}
int main() 
{
	int T,N,X,mi,ma;
	cin>>T;
	while(T--)
	{
	    mi=0;
	    ma=0;
	    cin>>N>>X;
	    int A[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        ma=max(A[i],ma);
	        mi+=divide(A[i],X);
	    }
	    cout<<min(ma,mi)<<endl;
	}
	return 0;
}
