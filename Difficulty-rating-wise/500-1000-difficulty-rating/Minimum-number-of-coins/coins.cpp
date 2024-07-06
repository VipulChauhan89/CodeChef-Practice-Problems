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
	    cout<<(((X%10)%5!=0)?-1:X/10+(X%10)/5)<<endl;
	}
	return 0;
}