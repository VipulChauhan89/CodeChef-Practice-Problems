/*
  Chef is the judge of a competition. There are two players participating in this competition — Alice and Bob.
  The competition consists of N races. For each i (1 ≤ i ≤ N), Alice finished the i-th race in Ai minutes, while Bob finished it in Bi minutes. 
  The player with the smallest sum of finish times wins. If this total time is the same for Alice and for Bob, a draw is declared.
  The rules of the competition allow each player to choose a race which will not be counted towards their total time. 
  That is, Alice may choose an index x and her finish time in the race with this index will be considered zero; similarly, 
  Bob may choose an index y and his finish time in the race with this index will be considered zero. 
  Note that x can be different from y; the index chosen by Alice does not affect Bob's total time or vice versa.

  Chef, as the judge, needs to announce the result of the competition. 
  He knows that both Alice and Bob play optimally and will always choose the best option. 
  
  Program to help Chef determine the result!
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,N,sum1,sum2;
	cin>>T;
	while(T--)
	{
	    sum1=0;
	    sum2=0;
	    cin>>N;
	    int A[N],B[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        sum1+=A[i];
	    }
	    for(int i=0;i<N;i++)
	    {
	        cin>>B[i];
	        sum2+=B[i];
	    }
	    sort(A,A+N);
	    sort(B,B+N);
	    sum1-=A[N-1];
	    sum2-=B[N-1];
	    if(sum1<sum2)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else if(sum1>sum2)
	    {
	        cout<<"Bob"<<endl;
	    }
	    else
	    {
	        cout<<"Draw"<<endl;
	    }
	}
	return 0;
}
