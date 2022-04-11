/*
  Ezio can manipulate at most X number of guards with the apple of eden.
  Given that there are Y number of guards, predict if he can safely manipulate all of them.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    (X>=Y)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
