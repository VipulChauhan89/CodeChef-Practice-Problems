/*
  program to Find the smallest possible value of ai + aj, where 1 ≤ i < j ≤ N.
  And You are given a sequence a1, a2, ..., aN.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,n;
	cin>>T;
	while(T--)
	{
	    cin>>n;
	    int num[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>num[i];
	    }
	    sort(num,num+n);
	    cout<<num[0]+num[1]<<endl;
	}
	return 0;
}
