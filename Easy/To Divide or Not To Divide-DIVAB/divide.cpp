/*
  Alice likes all the numbers which are divisible by A. Bob does not like the numbers which are divisible by B and likes all the remaining numbers. 
  Determine the smallest number greater than or equal to N which is liked by both Alice and Bob. Output −1 if no such number exists.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,N;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>N; 
	    if(A%B==0)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	        if(N%A!=0)
	        {
	            N+=A-(N%A);
	        }
	        while(!(N%A==0 && N%B!=0))
	        {
	            N+=A;
	        }
	        cout<<N<<endl;
	    }
	}
	return 0;
}
