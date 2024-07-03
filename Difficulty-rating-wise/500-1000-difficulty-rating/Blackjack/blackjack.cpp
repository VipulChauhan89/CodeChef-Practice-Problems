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
	    int sum=A+B;
	    cout<<((sum<11)?-1:21-sum)<<endl;
	}
	return 0;
}