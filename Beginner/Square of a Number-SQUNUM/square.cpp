//Program that accepts numbers and prints their squares.
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	unsigned int N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    cout<<N*N<<endl;
	}
	return 0;
}
