#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C;
	    int m=max({A,B,C});
	    cout<<((m==A)?"Alice":((m==B)?"Bob":"Charlie"))<<endl;
	}
	return 0;
}