/*
  There is a circular track of length M consisting of M checkpoints and M bidirectional roads such that each road has a length of 1 unit.

  Chef is currently at checkpoint A and wants to reach checkpoint B. Find the minimum length of the road he needs to travel.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,A,B,M;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>M;
	    int a=abs(B-A);
	    cout<<min(a,M-a)<<endl;
	}
	return 0;
}
