#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    cout<<((X<=7)?"Yes":"No")<<endl;
	}
	return 0;
}