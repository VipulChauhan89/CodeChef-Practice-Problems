/*
  Finally, College has started calling students back to campus. 
  There are so many students and thus due to some safety measures the college can’t call back all the students on the same day. 
  It currently has the capacity of screening K students on a single day. There is a total of N students. 
  Program to find the minimum number of days required for all the students to be back on the campus?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>K;
	    if(N%K!=0)
	    {
	        cout<<(N/K)+1<<endl;
	    }
	    else
	    {
	        cout<<N/K<<endl;
	    }
	}
	return 0;
}
