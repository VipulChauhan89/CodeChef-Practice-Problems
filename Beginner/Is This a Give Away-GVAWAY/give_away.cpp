/*
	You are given two integers l and r. You have to choose k real numbers in the interval [l,r] uniform randomly.
	What is the expected count of distinct numbers chosen by you?
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int L,R,K;
	    cin>>L>>R>>K;
	    (L==R)?cout<<1<<endl:cout<<K<<endl;
	}
	return 0;
}