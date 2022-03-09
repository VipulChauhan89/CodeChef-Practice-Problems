/*
  Faizal is very sad after finding out that he is responsible for Sardar's death. 
  He tries to drown his sorrows in alcohol and gets very drunk. Now he wants to return home but is unable to walk straight. 
  For every 3 steps forward, he ends up walking one step backward.

  Formally, in the 1st second he moves 3 steps forward, in the 2nd second he moves 1 step backwards, in the 3rd second he moves 3 steps forward, in 4th second 1 step backwards, and so on.

  Program to find how far from his initial position will Faizal be after k seconds have passed? Assume that Faizal's initial position is 0.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,k,j;
	cin>>T;
	while(T--)
	{
	    cin>>k;
	    if(k%2==0)
	    {
	        cout<<k<<endl;
	    }
	    else
	    {
	        cout<<k+2<<endl;
	    }
	}
	return 0;
}
