/*
  There is a group of N friends who wish to enroll in a course together. The course has a maximum capacity of M students that can register for it. 
  If there are K other students who have already enrolled in the course,
  
  Program to determine if it will still be possible for all the N friends to do so or not.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,M,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M>>K;
	    if(M-K>=N)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
