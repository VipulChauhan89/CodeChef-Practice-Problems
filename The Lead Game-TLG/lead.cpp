/*
  Program to build the lead game and output must consist of a single line containing two integers W and L, 
  where W is 1 or 2 and indicates the winner and L is the maximum lead attained by the winner.
*/
#include <iostream>
using namespace std;

int main() 
{
	int N,Si,Ti,W,L=0,sum1=0,sum2=0;
	cin>>N;
	while(N--)
	{
	    cin>>Si>>Ti;
	    sum1+=Si;
	    sum2+=Ti;
	    if(sum1>sum2 && L<sum1-sum2)
	    {
	        L=sum1-sum2;
	        W=1;
	    }
	    else if(sum1<=sum2 && L<sum2-sum1)
	    {
	        L=sum2-sum1;
	        W=2;
	    }
	}
	cout<<W<<" "<<L<<endl;
	return 0;
}
