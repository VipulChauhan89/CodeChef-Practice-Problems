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
	    X-=((X<=100)?0:((X>100 && X<=1000)?25:((X>1000 && X<=5000)?100:500)));
	    cout<<X<<endl;
	}
	return 0;
}