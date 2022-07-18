/*
  Chef has recently started playing chess, and wants to play as many games as possible.He calculated that playing one game of chess takes at least 20 minutes of his time.
  Chef has N hours of free time. What is the maximum number of complete chess games he can play in that time?
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    cout<<N*3<<endl;
	}
	return 0;
}
