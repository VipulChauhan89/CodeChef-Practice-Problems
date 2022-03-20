/*
  You have been recently hired as a developer in CodeChef. 
  Your first mission is to implement a feature that will determine the number of submissions that were judged late in a contest.
  There are N submissions, numbered 1 through N. 
  For each valid i, the i-th submission was submitted at time Si and judged at time Ji (in minutes). Submitting and judging both take zero time. 
  Program to determine how many submissions received their verdicts after a delay of more than 5 minutes.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,S,J,count;
	cin>>T;
	while(T--)
	{
	    count=0;
	    cin>>N;
	    while(N--)
	    {
	        cin>>S>>J;
	        if(J-S>5)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
