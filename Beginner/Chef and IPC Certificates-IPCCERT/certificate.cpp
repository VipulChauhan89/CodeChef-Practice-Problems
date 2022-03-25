/*
  There were N students (numbered 1 through N) participating in the Indian Programming Camp (IPC) and they watched a total of K lectures (numbered 1 through K). 
  For each student i and each lecture j, the i-th student watched the j-th lecture for Ti,j minutes.
  Additionally, for each student i, we know that this student asked the question, "What is the criteria for getting a certificate?" Qi times.
  The criteria for getting a certificate is that a student must have watched at least M minutes of lectures in total and they must have asked the question no more than 10 times.

  Program to find out how many participants are eligible for a certificate.
*/
#include <iostream>
using namespace std;

int main() 
{
	int N,M,K,sum,count=0;
	cin>>N>>M>>K;
	int T,Q;
	for(int i=0;i<N;i++)
	{
	    sum=0;
	    for(int j=0;j<K;j++)
	    {
	        cin>>T;
	        sum+=T;
	    }
	    cin>>Q;
	    if(sum>=M && Q<=10)
	    {
	        count++;
	    }
	}
	cout<<count<<endl;
	return 0;
}
