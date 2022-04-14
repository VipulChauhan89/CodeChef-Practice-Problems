/*
  Dazzler has a task for you.
  Given two positive integers A and B, find two positive integers i and j such that:
        gcd(i,j)>1;
        A≤i<j≤B;
        The value (i+j) is minimum possible.
  If there are multiple solutions, you may print any of them. If no such pair exists, print −1.
*/
#include <iostream>
#include <algorithm>
using namespace std;
void solve(int A,int B)
{
    for(int i=A;i<=B;i++)
	{
	    for(int j=A;j<=B && i!=j ;j++)
	    {
	        if(__gcd(i,j)>1)
	        {
	            cout<<j<<" "<<i<<endl;
	            return ;
	        }
	    }
	}
	cout<<-1<<endl;
	return;
}
int main() 
{
	int T,A,B,i,j;
	cin>>T;
	while(T--)
	{
	   cin>>A>>B;
	   solve(A,B);
	}
	return 0;
}
