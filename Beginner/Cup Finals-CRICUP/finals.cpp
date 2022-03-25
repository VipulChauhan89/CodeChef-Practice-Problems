/*
  It is the World Cup Finals. Chef only finds a match interesting if the skill difference of the competing teams is less than or equal to D.
  Given that the skills of the teams competing in the final are X and Y respectively, 
  
  Program to determine whether Chef will find the game interesting or not.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X,Y,D;
	cin>>T;
	while(T--)
	{
	   cin>>X>>Y>>D;
	   (abs(X-Y)<=D)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
