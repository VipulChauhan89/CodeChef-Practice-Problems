/*
  Chef is a big fan of Coldplay. 
  Every Sunday, he will drive to a park taking M minutes to reach there, and during the ride he will play a single song on a loop. 
  Today, he has got the latest song which is in total S minutes long. 
  Program to help chef to know how many times will he be able to play the song completely.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,M,S;
	cin>>T;
	while(T--)
	{
	    cin>>M>>S;
	    cout<<M/S<<endl;
	}
	return 0;
}
