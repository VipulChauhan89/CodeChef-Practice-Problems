/*
  Salmon has some hidden numbers that he wants you to find!
  Given an integer N, find and output any two integers A and B such that:
  A*B=N
.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    int i;
	    for(i=9;i>0;i--)
	    {
	        if(N%i==0)
	        {
	            break;
	        }
	    }
	    cout<<N/i<<" "<<i<<endl;
	}
	return 0;
}
