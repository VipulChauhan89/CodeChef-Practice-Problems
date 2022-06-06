/*
  Chef's playlist contains 3 songs named A,B, and C, each of duration exactly X minutes. Chef generally plays these 3 songs in loop, i.e, A→B→C→A→B→C→A→…
  Chef went on a train journey of N minutes and played his playlist on loop for the whole journey. How many times did he listen to the song C completely?
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,X;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X;
	    X*=3;
	    cout<<floor(N/X)<<endl;
	}
	return 0;
}
