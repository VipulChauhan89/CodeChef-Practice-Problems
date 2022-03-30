/*
  2021 was approaching and the world was about to end. So 2 gods Saurabhx and Saurabhy (from Celesta) created the Cyberverse. 
  But this time disappointed with humans both the gods decided not to have humans in this world. So they created a world of cyborgs. 
  A world without humans. Isn’t it interesting? So let us dive into the cyberverse and have a look at their problems.

  There are N kid cyborgs with Chief Cyborg '100gods' and he has K weapons with him. He wants to distribute those K weapons among N kid cyborgs. 
  Since all the kid cyborgs are very good friends, so they set a rule among themselves for taking those weapons. 
  The rule states that the difference between kid cyborg having the maximum weapons and the kid cyborg having minimum weapons should be less than or equal to 1.

  Program to find the value of the minimum number of weapons a kid cyborg can have when all the K weapons are distributed among them.
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
	    if(K>=N)
	    {
	        cout<<K/N<<endl;   
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	}
	return 0;
}
