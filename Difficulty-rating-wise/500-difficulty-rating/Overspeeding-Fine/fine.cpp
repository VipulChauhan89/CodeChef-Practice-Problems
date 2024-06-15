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
	    cout<<((X<=70)?0:((X>70 && X<=100)?500:2000))<<endl;
	}
	return 0;
}