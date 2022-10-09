/*
    Chef got his dream seat in F1 and secured a 3rd place in his debut race. He now wants to know the time gap between him and the winner of the race.
    You are his chief engineer and you only know the time gap between Chef and the runner up of the race, given as A seconds, and the time gap between the runner up and the winner of the race, given as B seconds.
    Please calculate and inform Chef about the time gap between him and the winner of the race.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B;
	    cout<<A+B<<endl;
	}
	return 0;
}