/*
  Moving forward, the project requires some government funding for completion, 
  which comes under one condition: to prove its worth, 
  the project should power Chefland by generating at least A units of power each year for the next B years.

  Help Chef determine whether the group will get funded assuming that the moon has X grams of Helium-3 and 1 gram of Helium-3 can provide Y
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,A,B,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>X>>Y;
	    if(A*B<=X*Y)
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
