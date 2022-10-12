/*
    Each pizza consists of 4 slices. There are N friends and each friend needs exactly X slices.
    Find the minimum number of pizzas they should order to satisfy their appetite.
*/
#include <iostream>
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
	    N*=X;
	    (N%4==0)?cout<<N/4<<endl:cout<<(N/4)+1<<endl;
	}
	return 0;
}