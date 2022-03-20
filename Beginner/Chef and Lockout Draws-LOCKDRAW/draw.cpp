/*
  Bob and Alice are having a lockout match between them. There are three problems in the contest worth A, B, and C points respectively. 
  Only the first player to solve a problem gets points for that problem. It is impossible for Bob and Alice to solve a problem at the same time. 
  Chef wants to know if there is any chance of a draw if Bob and Alice manage to solve all 3 problems. 
  A draw occurs when both players end with equal number of points.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,A,B,C,sum,Max;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C;
	    Max=max({A,B,C});
	    sum=A+B+C-Max;
	    if(Max==sum)
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
