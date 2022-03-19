/*
  There is a contest with interactive problems where N people participate. 
  Each contestant has a known rating. Chef wants to know which contestants will not forget to flush the output in interactive problems. 
  Fortunately, he knows that contestants with rating at least r never forget to flush their output and contestants with rating smaller than r always forget to do it. 
  Program to help Chef!
*/
#include <iostream>
using namespace std;

int main() 
{
	int N,r,R;
	cin>>N>>r;
	while(N--)
	{
	    cin>>R;
	    if(R>=r)
	    {
	        cout<<"Good boi"<<endl;
	    }
	    else 
	    {
	        cout<<"Bad boi"<<endl;
	    }
	}
	return 0;
}
