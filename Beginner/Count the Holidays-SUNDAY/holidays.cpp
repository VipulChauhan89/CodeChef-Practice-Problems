/*
  A particular month has 30 days, numbered from 1 to 30.
  Day 1 is a Monday, and the usual 7-day week is followed (so day 2 is Tuesday, day 3 is Wednesday, and so on).

  Every Saturday and Sunday is a holiday. There are N festival days, which are also holidays. 
  Note that it is possible for a festival day to occur on a Saturday or Sunday.
  You are given the dates of the festivals. 
  
  Program to determine the total number of holidays in this month.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,count;
	cin>>T;
	while(T--)
	{
	    count=0;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        if(A[i]==6 || A[i]==7 || A[i]==13 || A[i]==14 || A[i]==20 || A[i]==21 || A[i]==27 || A[i]==28)
	        {
	            count++;
	        }
	    }
	    cout<<8+N-count<<endl;
	}
	return 0;
}
