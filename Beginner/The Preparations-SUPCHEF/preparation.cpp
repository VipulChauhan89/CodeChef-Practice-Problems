/*
  Chef has an exam which will start exactly M minutes from now. 
  However, instead of preparing for his exam, Chef started watching Season-1 of Superchef. 
  Season-1 has N episodes, and the duration of each episode is K minutes.

  Program to find out will Chef be able to finish watching Season-1 strictly before the exam starts?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,M,N,K;
	cin>>T;
	while(T--)
	{
	    cin>>M>>N>>K;
	    if(N*K<M)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
