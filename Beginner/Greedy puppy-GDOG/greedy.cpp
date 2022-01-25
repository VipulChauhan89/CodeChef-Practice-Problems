/*
  Program to find maximum number of coins Tuzik can get
  
  When people come and open the chest they divide all the coins between them in such a way that everyone will get the same amount of coins and this amount is maximal possible. 
  If some coins are not used they will leave it on the ground and Tuzik will take them after they go away. 
  Since Tuzik is clearly not a fool, he understands that his profit depends on the number of people he will call. 
  While Tuzik works on his barking, you have to find the maximum possible number of coins he can get.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,K,Max;
	cin>>T;
	while(T--)
	{
	    Max=0;
	    cin>>N>>K;
	    for(int i=1;i<=K;i++)
	    {
	        Max=max(Max,N%i);
	    }
	    cout<<Max<<endl;
	}
	return 0;
}
